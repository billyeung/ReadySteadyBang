// C++期末.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
void grid(Player p1,Player p2){
	gotoxy(hout, 0, 0);
	system("COLOR 0E");
	cout << "\t\t\t┏━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
	cout<<" Rounds:                ┃                                                  ┃"<<endl;
	cout << "  ○ ○ ○ ○ ○ ○ ○  ┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "                        ┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "                        ┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┃                                                  ┃" << endl;
	cout << "\t\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━┛" ;
	gotoxy(hout, 0, 5); cout << " " << p1.getname() << ":";
	gotoxy(hout, 0, 8); cout << " " << p2.getname() << ":";
	gotoxy(hout, 26, 1); cout << p1.getname();
	gotoxy(hout, 26, 21); cout << p2.getname();
}
void flash(){
	long start = 0;
	system("COLOR 03");
	cout << endl << endl << endl << endl << endl;
	cout << "                                                   ih," << endl; Sleep(10);
	cout << "                                                   M@i" << endl; Sleep(10);
	cout << "                      ..                           #8" << endl; Sleep(10);
	cout << "                  sGXAAAAAXS:                      #3" << endl; Sleep(10);
	cout << "                  1B@A. .r@@1    :si    .:      .;1@5      :93." << endl; Sleep(10);
	cout << "                   ,@&,19&8i   ,GA8@X  rMBH8,  5HXA@5 SB8  h@M." << endl; Sleep(10);
	cout << "                   :@@@#S.    :B@  Mh ;@h.#@: 3@i  @3 s@A  S@G" << endl; Sleep(10);
	cout << "                    A@8&A&G5: 1@A35   &A  M#  BA   AH  &#.i@@A" << endl; Sleep(10);
	cout << "                    H@, .r3&B&&@Hhs1ShXM3H#@SrM@9hS#@r i@MM5AB" << endl; Sleep(10);
	cout << "                    5S,     .s5is33Ss,.581.1G9sr985hM9  15, &B" << endl; Sleep(10);
	cout << "                                                   .M9      XB" << endl; Sleep(10);
	cout << "                                                           .#A" << endl; Sleep(10);
	cout << "                                                           .Ms" << endl; Sleep(10);
	cout << "                                                           :Gi" << endl;
	cout << "\n\n\n\n\t\t\t     PRESS ANY KEY TO SKIP";
	start = clock();
	while (true) {
		if (_kbhit()) {
			_getch(); return;
		}
		if (clock() - start >= 1000) break;
	}
	gotoxy(hout, 0, 0);
	cout << endl << endl << endl << endl << endl;
	cout << "                                                       ,;" << endl; Sleep(10);
	cout << "                                                      ,#@;" << endl; Sleep(10);
	cout << "                              ss                      ,@9" << endl; Sleep(10);
	cout << "                   ,18A8.    r@8                      :@1" << endl; Sleep(10);
	cout << "                 1GX95s:     XB .     .               i@s      .r;" << endl; Sleep(10);
	cout << "               h#A1:.     139@BG9r  h&&Hs  :&A5i   iGXB@r 19s  3@A" << endl; Sleep(10);
	cout << "               h&G8XXX&A9:59@B:,  .&M  @S ,#95@@. 5@5:1@s G@8  9@3" << endl; Sleep(10);
	cout << "                       3@9  #3    9@HGGi  &&  @A  @G   #3 :@& ,#@9" << endl; Sleep(10);
	cout << "              s&:   .i9A3. ;@8:1X1h@Xi..ir#G;G@#,,@B;,i@B. 9@9MX#X" << endl; Sleep(10);
	cout << "              iAHXXXXX5,   .GB&8s. sGXX83i1AH81&AG9GA&G&@5 ,&As M&" << endl; Sleep(10);
	cout << "                ,;;:.                                  .@9      B&" << endl; Sleep(10);
	cout << "                                                               .#G" << endl; Sleep(10);
	cout << "                                                               .Ms" << endl; Sleep(10);
	cout << "                                                               :Gi" << endl;
	start = clock();
	while (true) {
		if (_kbhit()) {
			_getch(); return;
		}
		if (clock() - start >= 1000) break;
	}
	system("CLS");
	system("COLOR 0C");
	cout << endl << endl << endl << endl << endl;
	cout << "                                                             sr" << endl;
	cout << "                                                            h@G" << endl;
	cout << "                     ,,                                     MH" << endl;
	cout << "                    r##AX8991                              i@s" << endl;
	cout << "                    ,@H  h&#S      55:   h9 ;s      5X9;   9#" << endl;
	cout << "                    :@B8A@@XSh:   AHA@&  &@GM@G   .HA&@@8  &A" << endl;
	cout << "                    .##hr;;i1A@3 GB .@A  S@H:5@1 .HX  &@3  i;" << endl;
	cout << "                    ;##   .iS&Gi @h 5@X  S@h .#H s@  iB@s .:." << endl;
	cout << "                    r#@B88931,   XMAHX#G3H@s  9@1;@XGXS@3 hM5" << endl;
	cout << "                     ,3h:.        ii  :1r::    ;, ;1i .@S  ." << endl;
	cout << "                                                .S    s@i" << endl;
	cout << "                                                 AX:.;#X" << endl;
	cout << "                                                 .8A&&3" << endl;
	cout << "\n\n\n\n\n\t\t\t     PRESS ANY KEY TO SKIP";
	start = clock();
	while (true) {
		if (_kbhit()) {
			_getch(); return;
		}
		if (clock() - start >= 2000) break;
	}
}
void startfl(){
	system("CLS");
	system("COLOR 0C");
	cout << endl;
	cout << "                                              sr" << endl; Sleep(10);
	cout << "                                             h@G" << endl; Sleep(10);
	cout << "      ,,                                     MH" << endl; Sleep(10);
	cout << "     r##AX8991                              i@s" << endl; Sleep(10);
	cout << "     ,@H  h&#S      55:   h9 ;s      5X9;   9#" << endl; Sleep(10);
	cout << "     :@B8A@@XSh:   AHA@&  &@GM@G   .HA&@@8  &A" << endl; Sleep(10);
	cout << "     .##hr;;i1A@3 GB .@A  S@H:5@1 .HX  &@3  i;" << endl; Sleep(10);
	cout << "     ;##   .iS&Gi @h 5@X  S@h .#H s@  iB@s .:." << endl; Sleep(10);
	cout << "     r#@B88931,   XMAHX#G3H@s  9@1;@XGXS@3 hM5" << endl; Sleep(10);
	cout << "      ,3h:.        ii  :1r::    ;, ;1i .@S  ." << endl; Sleep(10);
	cout << "                                 .S    s@i" << endl; Sleep(10);
	cout << "                                  AX:.;#X" << endl; Sleep(10);
	cout << "                                  .8A&&3" << endl << endl << endl; Sleep(10);
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << " Introduction:" << endl; Sleep(10);
	cout << " Players must shoot when \"Bang!\" appears." << endl; Sleep(10);
	cout << " Player1 press \"space\" while Player2 press \"Enter\" to shoot." << endl; Sleep(10);
	cout << " The one who shoots faster wins the round." << endl; Sleep(10);
	cout << " If any player shoots before \"Bang!\" appears,he will lose the round." << endl;; Sleep(10);
	cout << " Press \"Esc\" to end the game."; Sleep(10);
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED); 
	gotoxy(hout, 53, 4);
	cout << " ◎╔";
	gotoxy(hout, 52, 5);
	cout << "╭∣╯";
	gotoxy(hout, 52, 6);
	cout << "  /\\ ";
	gotoxy(hout, 66, 4);
	cout << "╗◎";
	gotoxy(hout, 66, 5);
	cout << "╰∣╮";
	gotoxy(hout, 66, 6);
	cout << "  /\\ ";
	gotoxy(hout, 53, 8);
	cout << "Ready,Steady,Bang!";
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	gotoxy(hout, 53, 10);
	cout << "ARE YOU READY???";
	gotoxy(hout, 53, 12);
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_RED);
	cout << "PRESS \"ENTER\" TO START!";
	gotoxy(hout, 39, 23);
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN); cout << "Press \"Backspace\"→change players' names";
}
void clrsc(){
	int a;
	gotoxy(hout, 0, 0);
	for (a = 0; a <= 23; a++){ printf("\t\t\t\t\t\t\t\t\t       \n"); Sleep(10); }
}
void chname(Player &p1,Player &p2){
	string n;
	system("CLS");
	SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	gotoxy(hout, 37, 9); printf("PLAYER 1:");
	gotoxy(hout, 37, 12); printf("PLAYER 2:");
	gotoxy(hout, 37, 10); getline(cin, n);
	if (n[0] != '\0') p1.chname(n);
	gotoxy(hout, 37, 13); getline(cin, n);
	if (n[0] != '\0') p2.chname(n);
	system("CLS");
}
int _tmain(int argc, _TCHAR* argv[])
{
	flash();
	Player p1(6, "Player 1"), p2(9, "Player 2");
start:
	startfl();
input:
	char key = _getch();
	if (key == 0 || key == (char)0xE0) key = _getch();
	if (key == '\r')
		clrsc();
	else if (key == 8){
		chname(p1, p2); goto start;
	}
	else if (key == 27)
		exit(0);
	else
		goto input;
	grid(p1, p2);
	while (Player::rounds < 7){
		SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		gotoxy(hout, 47, 11);
		cout << "Round " << Player::rounds + 1;
		int i = shoot(p1, p2);
		if (0 == i) goto start;
		if (p1.getwinc() >= 4 || p2.getwinc() >= 4){
			for (int r = 0; r<7-Player::rounds; r++){
				SetConsoleTextAttribute(hout, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
				gotoxy(hout, 20 - 3 * r, 2);
				cout << "×";
			}
			break;
		}
	} 
	final(p1, p2);
	_getch();
	over(p1, p2);
	goto start;
	return 0;
}