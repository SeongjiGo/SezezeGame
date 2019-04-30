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
	fprintf(fp, "�̸�: %s, ����: %d\n", , score);
}

void saveHotBRAINData(char* , int score)
{
	FILE *fp = fopen("hotBRAIN.txt", "w");
	fprintf(fp, "�̸�: %s, ����: %d\n", , score);
}

void saveMensaData(char* , int score)
{
	FILE *fp = fopen("Mensa.txt", "w");
	fprintf(fp, "�̸�: %s, ����: %d\n", , score);
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
	PrintString(hStdOut, RED, 50, "�ڼ������� ���� ver - 1.0 BETA��\n");
	PrintString(hStdOut, YELLOW, 50, "(���󿡼� ���� ����ִ� ����) ����� 18�й� ����");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, GREEN, 0, "������ ������ ������ ���ϼ���!(����Ű�� �̵� �� �����̽���)\n");
	PrintString(hStdOut, WHITE, 20, "[1]����ư ���� �ø���\n");
	PrintString(hStdOut, WHITE, 20, "[2]������ ����\n");
	PrintString(hStdOut, WHITE, 20, "[3]�̴ϰ���\n");
	PrintString(hStdOut, WHITE, 20, "[4]����\n");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, RED, 0, "�����ǻ���: ���콺 ������ ����������! Ű����� ��� ���� �����մϴ�.");
	PrintString(hStdOut, RED, 0, "�����ǻ���: ���� �Է��� �� ����, ���ڰ��ƴ� Ư����ȣ, ���ڿ��� ���� �Է����� ���ʽÿ�.");
	PrintString(hStdOut, YELLOW, 0, "���������: ������ Ǯ�� �ִ� ���� �޴�ȭ������ ���ƿ����� ���� ��ȣ�� �״�� �����˴ϴ�.");
	PrintString(hStdOut, YELLOW, 0, "���������: ���� ��Ʈ�ο� ������ ������ �Ĳ��� �о��ֽʽÿ�.");
	PrintString(hStdOut, GREEN, 0, "escŰ�� ���� ��������� ��ŵ�� �� �ֽ��ϴ�.");
	PrintString(hStdOut, BLUE, 0, "");


	do
	{
		if (menuNum == RATEN)
		{
			gotoxy(25, 7);
			cout << "��";
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
				cout << "��";
				menuNum++;
				break;
			}

			if (menuNum == MINI)
			{
				gotoxy(25, 11);
				cout << " ";
				gotoxy(25, 9);
				cout << "��";
				menuNum++;
				break;
			}

			if (menuNum == EXIT)
			{
				gotoxy(25, 13);
				cout << " ";
				gotoxy(25, 11);
				cout << "��";
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
				cout << "��";
				menuNum--;
				break;
			}

			if (menuNum == BRAIN)
			{
				gotoxy(25, 9);
				cout << " ";
				gotoxy(25, 11);
				cout << "��";
				menuNum--;
				break;
			}

			if (menuNum == MINI)
			{
				gotoxy(25, 11);
				cout << " ";
				gotoxy(25, 13);
				cout << "��";
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
	case RATEN: //����ư���� �ø���
		printQuiz_vilige();
		break;

	case BRAIN: //������ ����
		printQuiz_hotBrain();
		break;

	case MINI: //�̴ϰ���
		gameMenu();
		break;

	case EXIT: // ����
		char str[100];
		system("cls");
		cout << "���� �����Ͻðڽ��ϱ�?\n\'����\'�� �ٽ� �� �� �Է����ּ���.\n�ٸ� �ܾ �Է��ϸ� ���Ⱑ ��ҵ˴ϴ�.\n�Է�: ";
		cin >> str; cin.ignore(1, '\n');

		if (strcmp(str, "����") == 0)
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
	PrintString(hStdOut, WHITE, 50, "�����???\n");
	Sleep(3000);
	PlaySound(TEXT("answer.wav"), NULL, SND_ASYNC);
	PrintString(hStdOut, BLUE, 50, "����\n");
	(*num)++;
	Sleep(2000);
}

void wrongFunc(int quizNum, int *num)
{
	int menuNum = 3;
	int key;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	PrintString(hStdOut, WHITE, 50, "�����???\n");
	Sleep(3000);
	PlaySound(TEXT("Wrong.wav"), NULL, SND_ASYNC);
	PrintString(hStdOut, RED, 20, "����\n");
	Sleep(2000);

	system("cls");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 10, "������ �ƴմϴ�!");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, GREEN, 10, "���Ͻô� �޴��� ���ڸ� �������ֽʽÿ�.(space��)");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 10, "[1]�ٽ� Ǯ���\n");
	PrintString(hStdOut, WHITE, 10, "[2]�̴ϰ��� ����!! (�ش亸��)\n");
	PrintString(hStdOut, WHITE, 10, "[3]���θ޴��� ���ư���\n");
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
			cout << "��";
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
				cout << "��";
				menuNum++;
				break;
			}

			if (menuNum == MENU)
			{
				gotoxy(30, 9);
				cout << " ";
				gotoxy(30, 7);
				cout << "��";
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
				cout << "��";
				menuNum--;
				break;
			}

			if (menuNum == MINI)
			{
				gotoxy(30, 7);
				cout << " ";
				gotoxy(30, 9);
				cout << "��";
				menuNum--;
				break;
			}

			if (menuNum == MENU)
				continue;
			break;
		}
	} while (key != SPACE);

	if (quizNum == 1)	// ������ ���ڿ��� Ʋ���� ���
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
	if (quizNum == 2) // ����ư �������� Ʋ���� ���
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