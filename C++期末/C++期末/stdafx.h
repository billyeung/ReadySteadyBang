// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO:  在此处引用程序需要的其他头文件
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