// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<time.h>
#include<string>
using namespace std;
class Player{
private:
	int winc;
	int y;
	string name;
public:
	Player(int y, string n,int w = 0) :y(y), name(n), winc(w){};
	void win();
	int getwinc(){ return winc; }
	string getname(){ return name; }
	void chname(string &n){ name = n; }
	void clwinc(){ winc = 0; }
	static int rounds;
};
extern void gotoxy(HANDLE hout, int, int);
extern int shoot(Player &, Player &);
extern void clrsc();
extern void final(Player &, Player &);
extern void over(Player &, Player &);
extern HANDLE hout;