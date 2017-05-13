#include"stdafx.h"
void gotoxy(HANDLE hout, int x, int y){
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(hout, pos);
}
HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
int Player::rounds = 0; long start = 0;
void p1wfl(int i){
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	if (0 == i){
		gotoxy(hout, 50, 19);
		cout << "◎";
		gotoxy(hout, 48, 20);
		cout << "╭∣╝";
		gotoxy(hout, 50, 21);
		cout << "/\\";
		Sleep(1000);
		gotoxy(hout, 49, 19);
		cout << "＝＝";
		gotoxy(hout, 50, 1);
		cout << "◎";
		gotoxy(hout, 48, 2);
		cout << "╚∣╝";
		gotoxy(hout, 50, 3);
		cout << "/\\";
	}
	else if (1 == i){
		cout << "\a";
		gotoxy(hout, 50, 1);
		cout << "◎";
		gotoxy(hout, 48, 2);
		cout << "╔∣╮";
		gotoxy(hout, 48, 3);
		cout << "┆/\\";
		SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		gotoxy(hout, 50, 19);
		cout << "╭╭";
		gotoxy(hout, 48, 20);
		cout << "◎ ━";
		gotoxy(hout, 50, 21);
		cout << "╰╰";
	}
}
void p2wfl(int i){
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	if (0 == i){
		gotoxy(hout, 50, 1);
		cout << "◎";
		gotoxy(hout, 48, 2);
		cout << "╔∣╮";
		gotoxy(hout, 50, 3);
		cout << "/\\";
		Sleep(1000);
		gotoxy(hout, 49, 1);
		cout << "＝＝";
		gotoxy(hout, 50, 19);
		cout << "◎";
		gotoxy(hout, 48, 20);
		cout << "╚∣╝";
		gotoxy(hout, 50, 21);
		cout << "/\\";
	}
	if (1 == i){
		cout << "\a";
		gotoxy(hout, 50, 19);
		cout << "◎┆";
		gotoxy(hout, 48, 20);
		cout << "╭∣╝";
		gotoxy(hout, 50, 21);
		cout << "/\\";
		SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		gotoxy(hout, 49, 1);
		cout << "╮╮";
		gotoxy(hout, 49, 2);
		cout << " ━ ◎";
		gotoxy(hout, 49, 3);
		cout << "╯╯";
	}
}
void Player::win(){
	gotoxy(hout, 2 + rounds * 3, 2);
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_GREEN); cout << "●";
	gotoxy(hout, 2 + winc * 3, y);
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_RED); cout << "★";
	winc++;
	rounds++;
	start = clock();
	while (true) {
		if (_kbhit()) _getch();
		if (clock() - start >= 2000) break;
	}
}
void over(Player &p1, Player &p2){
	clrsc();
	p1.clwinc(); p2.clwinc();
	Player::rounds = 0;
}
int shoot(Player &p1, Player &p2){
	int t;
	srand((unsigned)time(NULL));
	t = rand() % 100;
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	gotoxy(hout, 49, 1);
	cout << " ◎ ";
	gotoxy(hout, 48, 2);
	cout << "╭∣╮";
	gotoxy(hout, 48, 3);
	cout << "  /\\ ";
	gotoxy(hout, 49, 19);
	cout << " ◎  ";
	gotoxy(hout, 48, 20);
	cout << "╭∣╮";
	gotoxy(hout, 50, 21);
	cout << "/\\ ";
	start = clock();
	char key;
	while (true){
		if (_kbhit()) key = _getch();
		if (key == 0 || key == (char)0xE0) key = _getch();
		if (key == 27) {
			over(p1, p2); return 0;
		}
		if (clock() - start >= 2000) break;
	}
	gotoxy(hout, 48, 11);
	cout << "\b Ready  ";
	start = clock();
	while (true){
		if (_kbhit()) key = _getch();
		if (key == 0 || key == (char)0xE0) key = _getch();
		if (key == 27) {
			over(p1, p2); return 0;
		}
		if (clock() - start >= 1500) break;
	}
	cout << "\b\b\b\b\b\b\bSteady";
	start = clock();
	while (true){
		if (_kbhit()){
			char key = _getch();
			if (key == 0 || key == (char)0xE0) key = _getch();
			switch (key){
			case 32:
				p2wfl(0);
				p2.win();
				return 1;
			case 13:
				p1wfl(0);
				p1.win();
				return 1;
			case 27:
				over(p1, p2); 
				return 0;
			}
		}
		if (clock() - start >= (t + 10) * 100) break;
	}
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_RED); cout << "\b\b\b\b\b\b\b  Bang!";
press:
	key = _getch();
	if (key == 0 || key == (char)0xE0) key = _getch();
	switch (key){
	case 32:
		p1wfl(1);
		p1.win();
		break;
	case 13:
		p2wfl(1);
		p2.win();
		break;
	case 27:
		over(p1, p2);
		return 0;
	default:
		goto press;
	}
}
void final(Player &p1, Player &p2){
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_RED);
	gotoxy(hout, 48, 11);
	cout << "\t";
	gotoxy(hout, 49, 12);
	cout << "WIN!";
	if (p1.getwinc() > p2.getwinc()){
		gotoxy(hout, 26 + (50 - p1.getname().length()) / 2, 11);
		cout << p1.getname();
		SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		gotoxy(hout, 73, 1); cout << "WIN";
		gotoxy(hout, 72, 21); cout << "LOSE";
	}
	else{
		gotoxy(hout, 26 + (50 - p2.getname().length()) / 2, 11);
		cout << p2.getname();
		SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		gotoxy(hout, 73, 21); cout << "WIN";
		gotoxy(hout, 72, 1); cout << "LOSE";
	}
}