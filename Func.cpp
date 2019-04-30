#include "Quiz.h"

void gotoxy(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

/*void saveOddViligeData(char* , int score)
{
	FILE *fp = fopen("oddVilige.txt", "w");
	fprintf(fp, "이름: %s, 점수: %d\n", , score);
}

void saveHotBRAINData(char* , int score)
{
	FILE *fp = fopen("hotBRAIN.txt", "w");
	fprintf(fp, "이름: %s, 점수: %d\n", , score);
}

void saveMensaData(char* , int score)
{
	FILE *fp = fopen("Mensa.txt", "w");
	fprintf(fp, "이름: %s, 점수: %d\n", , score);
}*/

void PrintString(HANDLE hStdOut, WORD Attribute, int effect, LPCSTR str)
{
	SetConsoleTextAttribute(hStdOut, Attribute);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (kbhit() == 1)
		{ 
			if(getch() == 27)
			effect = 0;

		}
		printf("%c", str[i]);
		Sleep(effect);
	}

	cout << endl;
}


void menu()
{
	PlaySound(TEXT("menuBgm2.wav"), NULL, SND_ASYNC | SND_LOOP);
	enum {
		UP = 72, DOWN = 80, SPACE = 32
	};

	enum {
		RATEN = 4, BRAIN = 3, MINI = 2, EXIT = 1
	};

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	int menuNum = 4;
	int key;	

	system("cls");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, RED, 50, "★세제재제 게임 ver - 1.0 BETA★\n");
	PrintString(hStdOut, YELLOW, 50, "(세상에서 제일 재미있는 문제) 라온팀 18학번 고성지");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, GREEN, 0, "도전할 문제의 종류를 택하세요!(방향키로 이동 후 스페이스바)\n");
	PrintString(hStdOut, WHITE, 20, "[1]레이튼 교수 시리즈\n");
	PrintString(hStdOut, WHITE, 20, "[2]문제적 남자\n");
	PrintString(hStdOut, WHITE, 20, "[3]미니게임\n");
	PrintString(hStdOut, WHITE, 20, "[4]포기\n");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, RED, 0, "※주의사항: 마우스 조작을 하지마세요! 키보드로 모든 것이 가능합니다.");
	PrintString(hStdOut, RED, 0, "※주의사항: 답을 입력할 때 숫자, 문자가아닌 특수기호, 문자열을 절대 입력하지 마십시오.");
	PrintString(hStdOut, YELLOW, 0, "※참고사항: 문제를 풀고 있는 도중 메뉴화면으로 돌아오더라도 문제 번호는 그대로 유지됩니다.");
	PrintString(hStdOut, YELLOW, 0, "※참고사항: 문제 인트로에 나오는 문구를 꼼꼼히 읽어주십시오.");
	PrintString(hStdOut, GREEN, 0, "esc키를 통해 문자출력을 스킵할 수 있습니다.");
	PrintString(hStdOut, BLUE, 0, "");


	do
	{
		if (menuNum == RATEN)
		{
			gotoxy(25, 7);
			cout << "☜";
		}

		key = getch();

		switch (key)
		{
			
		case UP:
			if (menuNum == RATEN)
			{
				continue;
			}

			if (menuNum == BRAIN)
			{
				gotoxy(25, 9);
				cout << " ";
				gotoxy(25, 7);
				cout << "☜";
				menuNum++;
				break;
			}

			if (menuNum == MINI)
			{
				gotoxy(25, 11);
				cout << " ";
				gotoxy(25, 9);
				cout << "☜";
				menuNum++;
				break;
			}

			if (menuNum == EXIT)
			{
				gotoxy(25, 13);
				cout << " ";
				gotoxy(25, 11);
				cout << "☜";
				menuNum++;
				break;
			}
			break;

		case DOWN:
			if (menuNum == RATEN)
			{
				gotoxy(25, 7);
				cout << " ";
				gotoxy(25, 9);
				cout << "☜";
				menuNum--;
				break;
			}

			if (menuNum == BRAIN)
			{
				gotoxy(25, 9);
				cout << " ";
				gotoxy(25, 11);
				cout << "☜";
				menuNum--;
				break;
			}

			if (menuNum == MINI)
			{
				gotoxy(25, 11);
				cout << " ";
				gotoxy(25, 13);
				cout << "☜";
				menuNum--;
				break;
			}

			if (menuNum == EXIT)
				continue;
			break;
		}
	} while (key != SPACE);

	switch (menuNum)
	{ 
	case RATEN: //레이튼교수 시리즈
		printQuiz_vilige();
		break;

	case BRAIN: //문제적 남자
		printQuiz_hotBrain();
		break;

	case MINI: //미니게임
		gameMenu();
		break;

	case EXIT: // 포기
		char str[100];
		system("cls");
		cout << "정말 포기하시겠습니까?\n\'포기\'를 다시 한 번 입력해주세요.\n다른 단어를 입력하면 포기가 취소됩니다.\n입력: ";
		cin >> str; cin.ignore(1, '\n');

		if (strcmp(str, "포기") == 0)
		{
			return;
		}

		else
			menu();
	}
}

void answerFunc(int *num)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	PrintString(hStdOut, WHITE, 50, "결과는???\n");
	Sleep(3000);
	PlaySound(TEXT("answer.wav"), NULL, SND_ASYNC);
	PrintString(hStdOut, BLUE, 50, "정답\n");
	(*num)++;
	Sleep(2000);
}

void wrongFunc(int quizNum, int *num)
{
	int menuNum = 3;
	int key;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	PrintString(hStdOut, WHITE, 50, "결과는???\n");
	Sleep(3000);
	PlaySound(TEXT("Wrong.wav"), NULL, SND_ASYNC);
	PrintString(hStdOut, RED, 20, "오답\n");
	Sleep(2000);

	system("cls");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 10, "정답이 아닙니다!");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, GREEN, 10, "원하시는 메뉴의 숫자를 선택해주십시오.(space바)");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 10, "[1]다시 풀어보기\n");
	PrintString(hStdOut, WHITE, 10, "[2]미니게임 찬스!! (해답보기)\n");
	PrintString(hStdOut, WHITE, 10, "[3]메인메뉴로 돌아가기\n");
	PrintString(hStdOut, BLUE, 0, "=================================================");

	enum {
		UP = 72, DOWN = 80, SPACE = 32
	};

	enum {
		RE = 3, MINI = 2, MENU = 1
	};
	do
	{
		if (menuNum == RE)
		{
			gotoxy(30, 5);
			cout << "☜";
		}

		key = getch();

		switch (key)
		{

		case UP:
			if (menuNum == RE)
			{
				continue;
			}

			if (menuNum == MINI)
			{
				gotoxy(30, 7);
				cout << " ";
				gotoxy(30, 5);
				cout << "☜";
				menuNum++;
				break;
			}

			if (menuNum == MENU)
			{
				gotoxy(30, 9);
				cout << " ";
				gotoxy(30, 7);
				cout << "☜";
				menuNum++;
				break;
			}

			break;

		case DOWN:
			if (menuNum == RE)
			{
				gotoxy(30, 5);
				cout << " ";
				gotoxy(30, 7);
				cout << "☜";
				menuNum--;
				break;
			}

			if (menuNum == MINI)
			{
				gotoxy(30, 7);
				cout << " ";
				gotoxy(30, 9);
				cout << "☜";
				menuNum--;
				break;
			}

			if (menuNum == MENU)
				continue;
			break;
		}
	} while (key != SPACE);

	if (quizNum == 1)	// 문제적 남자에서 틀렸을 경우
	{
		switch (menuNum)
		{
		case RE:
			printQuiz_hotBrain();
			break;

		case MINI:
			gameMenu(num);
			Sleep(3000);
			answerFunc(num);
			explanation_hotbrain(num);
			printQuiz_hotBrain();
			break;

		case MENU:
			menu();
			break;
		}
	}
	if (quizNum == 2) // 레이튼 교수에서 틀렸을 경우
	{
		switch (menuNum)
		{
		case RE:
			printQuiz_vilige();
			break;

		case MINI:
			gameMenu(num);
			Sleep(3000);
			answerFunc(num);
			explanation_oddVilige(num);
			printQuiz_vilige();
			break;

		case MENU:
			menu();
			break;
		}
	}
}