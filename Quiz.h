#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include<MMSystem.h> 
#pragma comment(lib, "winmm.lib")
#pragma warning (disable : 4996)

#define QUIZNUMBER 10
#define RED         (FOREGROUND_RED | FOREGROUND_INTENSITY)
#define BLUE        (FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define PINK        (RED | BLUE)
#define WHITE       (RED | GREEN | BLUE)
#define GREEN       (FOREGROUND_GREEN | FOREGROUND_INTENSITY)
#define YELLOW      (RED | GREEN)
#define SKYBLUE     (GREEN | BLUE)

using namespace std;



void PrintString(HANDLE, WORD, int, LPCSTR ); // 폰트에 컬러입히기
void printQuiz_hotBrain();
void printQuiz_vilige();
void gotoxy(int, int);
void menu();
void explanation_oddVilige(int*);
void explanation_hotbrain(int*);
void answerFunc(int* );
void wrongFunc(int,  int*);
//void saveOddViligeData(int);
//void saveHotBrainData(int);
//void saveMensaData(int);
int main();
void gameMenu();
void gameMenu(int*);
void UpDownGame();
void RSPGame();