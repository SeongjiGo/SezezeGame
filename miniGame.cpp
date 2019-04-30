#include "Quiz.h"

void gameMenu() // ��������
{
	int menuNum = 4;
	int key;
	PlaySound(TEXT("�κ�BGM.wav"), NULL, SND_ASYNC | SND_LOOP);
	enum {
		UP = 72, DOWN = 80, SPACE = 32
	};

	enum {
		UPDOWN = 4, RSP = 3, MAZE = 2, MAIN = 1
	};

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, YELLOW, 20, "�� �� . �� . �� . �� . �� �� ");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 20, "���� ������ ��ŵ�ϱ����� �̴ϰ����� �����Ӱ� �� �� �ִ� �����Դϴ�.");
	PrintString(hStdOut, WHITE, 20, "������ �����ϴ��� �ƹ��� ������ ������ �����ÿ� ���θ޴��� �ٽ� ���ư��ϴ�.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 20, "���� ������ ������ �������ֽʽÿ�.(����Ű�� �̵� �� �����̽���)\n");
	PrintString(hStdOut, WHITE, 20, "[1]Up & Down ����\n");
	PrintString(hStdOut, WHITE, 20, "[2]���������� ����\n");
	PrintString(hStdOut, RED, 20, "[3]�̷ΰ���(���Ұ�)\n");
	PrintString(hStdOut, WHITE, 20, "[4]����ȭ��\n");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	do
	{
		if (menuNum == UPDOWN)
		{
			gotoxy(25, 8);
			cout << "��";
		}

		key = getch();

		switch (key)
		{
		case UP:
			if (menuNum == UPDOWN)
			{
				continue;
			}

			if (menuNum == RSP)
			{
				gotoxy(25, 10);
				cout << " ";
				gotoxy(25, 8);
				cout << "��";
				menuNum++;
				break;
			}

			if (menuNum == MAZE)
			{
				gotoxy(25, 12);
				cout << " ";
				gotoxy(25, 10);
				cout << "��";
				menuNum++;
				break;
			}

			if (menuNum == MAIN)
			{
				gotoxy(25, 14);
				cout << " ";
				gotoxy(25, 12);
				cout << "��";
				menuNum++;
				break;
			}
			break;

		case DOWN:
			if (menuNum == UPDOWN)
			{
				gotoxy(25, 8);
				cout << " ";
				gotoxy(25, 10);
				cout << "��";
				menuNum--;
				break;
			}

			if (menuNum == RSP)
			{
				gotoxy(25, 10);
				cout << " ";
				gotoxy(25, 12);
				cout << "��";
				menuNum--;
				break;
			}

			if (menuNum == MAZE)
			{
				gotoxy(25, 12);
				cout << " ";
				gotoxy(25, 14);
				cout << "��";
				menuNum--;
				break;
			}

			if (menuNum == MAIN)
				continue;
			break;
		}
	} while (key != SPACE);

	switch (menuNum)
	{
	case UPDOWN: //���ٿ����
		UpDownGame();
		break;

	case RSP: //��������������
		RSPGame();
		break;

	case MAZE: //�̷ΰ���
		system("cls");
		cout << "�˼��մϴ�. �� ����� ���� ����Ͻ� �� �����ϴ�." << endl;
		Sleep(2000);
		gameMenu();
		break;

	case MAIN: // ����ȭ������ �̵�
		menu();
		break;
	}
	PrintString(hStdOut, WHITE, 10, "��, �̴ϰ��������̹Ƿ� �ƹ��� ������ �����ϴ�.");
	PrintString(hStdOut, WHITE, 10, "��� �� ����ȭ������ ���ư��ϴ�.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	Sleep(3000);
	menu();
}

void gameMenu(int *num) // ��������
{
	int menuNum = 4;
	int key;
	PlaySound(TEXT("�κ�BGM.wav"), NULL, SND_ASYNC | SND_LOOP);
	enum {
		UP = 72, DOWN = 80, SPACE = 32
	};

	enum {
		UPDOWN = 4, RSP = 3, MAZE = 2, MAIN = 1
	};

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, YELLOW, 20, "�� �� . �� . �� . �� . �� �� ");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 20, "���� ������ ��ŵ�� ������ ���� �� �ִ� �̴ϰ��� ���Դϴ�.");
	PrintString(hStdOut, WHITE, 20, "���ӿ� �����ϰ� �Ǹ� �ش��� �����ϰ� ���������� �Ѿ �� �ֽ��ϴ�.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, YELLOW, 20, "�����Ͻ� ������ ������ �������ֽʽÿ�.(����Ű�� �̵� �� �����̽���)\n");
	PrintString(hStdOut, WHITE, 20, "[1]Up & Down ����\n");
	PrintString(hStdOut, WHITE, 20, "[2]���������� ����\n");
	PrintString(hStdOut, RED, 20, "[3]�̷ΰ���(���Ұ�)\n");
	PrintString(hStdOut, WHITE, 20, "[4]����ȭ��\n");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	do
	{
		if (menuNum == UPDOWN)
		{
			gotoxy(25, 8);
			cout << "��";
		}

		key = getch();

		switch (key)
		{
		case UP:
			if (menuNum == UPDOWN)
			{
				continue;
			}

			if (menuNum == RSP)
			{
				gotoxy(25, 10);
				cout << " ";
				gotoxy(25, 8);
				cout << "��";
				menuNum++;
				break;
			}

			if (menuNum == MAZE)
			{
				gotoxy(25, 12);
				cout << " ";
				gotoxy(25, 10);
				cout << "��";
				menuNum++;
				break;
			}

			if (menuNum == MAIN)
			{
				gotoxy(25, 14);
				cout << " ";
				gotoxy(25, 12);
				cout << "��";
				menuNum++;
				break;
			}
			break;

		case DOWN:
			if (menuNum == UPDOWN)
			{
				gotoxy(25, 8);
				cout << " ";
				gotoxy(25, 10);
				cout << "��";
				menuNum--;
				break;
			}

			if (menuNum == RSP)
			{
				gotoxy(25, 10);
				cout << " ";
				gotoxy(25, 12);
				cout << "��";
				menuNum--;
				break;
			}

			if (menuNum == MAZE)
			{
				gotoxy(25, 12);
				cout << " ";
				gotoxy(25, 14);
				cout << "��";
				menuNum--;
				break;
			}

			if (menuNum == MAIN)
				continue;
			break;
		}
	} while (key != SPACE);

	switch (menuNum)
	{
	case UPDOWN: //����ư���� �ø���
		UpDownGame();
		break;

	case RSP: //������ ����
		RSPGame();
		break;

	case MAZE: //�̷ΰ���
		system("cls");
		cout << "�˼��մϴ�. �� ����� ���� ����Ͻ� �� �����ϴ�." << endl;
		Sleep(2000);
		gameMenu(num);
		break;

	case MAIN: // ����ȭ��
		menu();
		break;
	}
	PrintString(hStdOut, WHITE, 10, "������ �ش��� �����ְ� ����Ű�� �����ø� ���� ������ ���ɴϴ�.");
	PrintString(hStdOut, WHITE, 10, "��� �� ������ ���� ��Ȳ�� ����˴ϴ�.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	
}
void UpDownGame()
{
	int randNum, userNum, remainChance = 6;
	system("cls");
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	PlaySound(TEXT("UpDown.wav"), NULL, SND_ASYNC | SND_LOOP);

	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 20, "Up&Down ������ �����ϼ̽��ϴ�.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 20, "����ڰ� ������ �����ϰ� �̸� ���ߴ� �����Դϴ�.");
	PrintString(hStdOut, GREEN, 20, "�������� ���� ���ڸ� �Է��ϸ� Down! �� ����ϰ�");
	PrintString(hStdOut, GREEN, 20, "�������� ���� ���ڸ� �Է��ϸ� Up! �� ����մϴ�.");
	PrintString(hStdOut, RED, 20, "���� ����: 1���� 100������ ���ڸ� 6���ȿ� ���߸� ����"); 
	PrintString(hStdOut, GREEN, 20, "����Ű�� ������ ������ ���۵˴ϴ�.");
	PrintString(hStdOut, BLUE, 0, "=================================================");

	while (true) {
		if (kbhit() == 1)
		{
			if (getch() == 13)
			{
				break;
			}
		}
	}
	system("cls");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, YELLOW, 10, "Up & Down������ �����մϴ�.");
	Sleep(2000);
	srand(time(NULL));
	randNum = rand() % 99 + 1;
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, RED, 10, "���α׷��� 1~100 ������ ������ �����߽��ϴ�.");
	PrintString(hStdOut, RED, 10, "6�� ���� �� ���ڸ� ���纸����!");
	PrintString(hStdOut, RED, 10, "��� �� ���� �˴ϴ�.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	Sleep(3000);
	while (true)
	{
		if (remainChance <= 0)
		{
			system("cls");
			PrintString(hStdOut, RED, 10, "����!");
			PrintString(hStdOut, RED, 10, "���� ��ȸ�� ��� �����Ǿ����ϴ�.");
			PrintString(hStdOut, RED, 10, "3�ʵ� ����ȭ������ ���ư��ϴ�.");
			Sleep(3000);
			menu();
		}
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 10, ("������ȸ ")); cout << remainChance << endl;
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "�����Է� ");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		cin >> userNum; cin.ignore(1, '\n');
		remainChance--;

		if (userNum > randNum)
		{
			PrintString(hStdOut, BLUE, 10, "Down!");
			PrintString(hStdOut, BLUE, 0, "=================================================");
		}

		else if (userNum < randNum)
		{
			PrintString(hStdOut, RED, 10, "Up!");
			PrintString(hStdOut, BLUE, 0, "=================================================");
		}

		else
		{
			PrintString(hStdOut,GREEN, 10, "����! ���ڸ� ������ϴ�.");
			break;
		}
	}
	PrintString(hStdOut, BLUE, 0, "=================================================");	
}

void RSPGame()
{
	int userRSP, comRSP;
	int winNum = 0, loseNum = 0;
	int key;
	system("cls");
	srand(time(NULL));
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	PlaySound(TEXT("snow.wav"), NULL, SND_ASYNC | SND_LOOP);
	enum {
		R = 3, S = 2, P = 1
	};

	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, RED, 20, "���������� ������ �����ϼ̽��ϴ�.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, GREEN, 20, "�������� ���� �ƴ� ���������� �����Դϴ�.");
	PrintString(hStdOut, GREEN, 20, "���� ���� �� �� �ϳ��� ���Ͻð� 2�� �ڿ�");
	PrintString(hStdOut, GREEN, 20, "��ǻ�Ͱ� ������ ���������� ���� ���� �� �� �ϳ��� ���ϴ�.");
	PrintString(hStdOut, GREEN, 20, "5�� �� 2���� �̱�� �����մϴ�.");
	PrintString(hStdOut, BLUE, 20, "�ʹ� ���� �ʳİ��?");
	PrintString(hStdOut, RED, 20, "�ƴմϴ�. ���� �͵� �� Ƚ���� ���ϴ�. �׷� �����?");
	PrintString(hStdOut, GREEN, 20, "����Ű�� ������ ������ ���۵˴ϴ�.");
	PrintString(hStdOut, BLUE, 0, "=================================================");

	while (true) {
		if (kbhit() == 1)
		{
			if (getch() == 13)
			{
				break;
			}
		}
	}
	system("cls");
	userRSP = 3;
	for (int i = 0; i < 5; i++)
	{
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, GREEN, 10, "����, ����, �� �� �ϳ��� �����ϼ��� (SPACE ��)");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 10, "[1] ���� (��)\n");
		PrintString(hStdOut, YELLOW, 10, "[2] ���� (��)\n");
		PrintString(hStdOut, YELLOW, 10, "[3] �� (��)\n");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		enum {
			UP = 72, DOWN = 80, SPACE = 32
		};

		enum {
			ROCK = 3, SCISSOR = 2, PAPER = 1
		};
		do
		{
			if (userRSP == ROCK)
			{
				gotoxy(20, 3);
				cout << "��";
			}

			key = getch();

			switch (key)
			{

			case UP:
				if (userRSP == ROCK)
				{
					continue;
				}

				if (userRSP == SCISSOR)
				{
					gotoxy(20, 5);
					cout << " ";
					gotoxy(20, 3);
					cout << "��";
					userRSP++;
					break;
				}

				if (userRSP == PAPER)
				{
					gotoxy(20, 7);
					cout << " ";
					gotoxy(20, 5);
					cout << "��";
					userRSP++;
					break;
				}

				break;

			case DOWN:
				if (userRSP == ROCK)
				{
					gotoxy(20, 3);
					cout << " ";
					gotoxy(20, 5);
					cout << "��";
					userRSP--;
					break;
				}

				if (userRSP == SCISSOR)
				{
					gotoxy(20, 5);
					cout << " ";
					gotoxy(20, 7);
					cout << "��";
					userRSP--;
					break;
				}

				if (userRSP == PAPER)
					continue;
				break;
			}
		} while (key != SPACE);

		system("cls");
		if (userRSP == R) // ����
		{
			PrintString(hStdOut, YELLOW, 10, "������ �����ϼ̽��ϴ�.");
		}

		else if (userRSP == S) // ����
		{
			PrintString(hStdOut, YELLOW, 10, "������ �����ϼ̽��ϴ�.");
		}

		else if (userRSP == P) // ��
		{
			PrintString(hStdOut, YELLOW, 10, "���� �����ϼ̽��ϴ�.");
		}

		else
		{
			cout << "�ٽ� �Է��ϼ���!" << endl;
			i--;
			continue;
		}
		PrintString(hStdOut, BLUE, 0, "=================================================");
		Sleep(1000);
		comRSP = rand() % 2 + 1;
		PrintString(hStdOut, RED, 50, "��  ���� �� ��  ����������!!");
		
		if (comRSP == R) // ����
		{
			PrintString(hStdOut, BLUE, 0, "��ǻ��: ����");
			Sleep(2000);
			PrintString(hStdOut, BLUE, 0, "=================================================");
			if (userRSP == R || userRSP == S)
			{
				PrintString(hStdOut, YELLOW, 20, "��, �й��ϼ̽��ϴ�.");
				loseNum++;
			}
			
			if (userRSP == P)
			{
				PrintString(hStdOut, YELLOW, 20, "�¸�!! �̰���ϴ�.");
				winNum++;
			}
		}

		else if (comRSP == S) // ����
		{
			PrintString(hStdOut, BLUE, 0, "��ǻ��: ����");
			Sleep(2000);
			PrintString(hStdOut, BLUE, 0, "=================================================");
			if (userRSP == S || userRSP == P)
			{
				PrintString(hStdOut, YELLOW, 20, "��, �й��ϼ̽��ϴ�.");
				loseNum++;
			}

			if (userRSP == R)
			{
				PrintString(hStdOut, YELLOW, 20, "�¸�!! �̰���ϴ�.");
				winNum++;
			}
		}

		else if (comRSP == P) // ��
		{
			PrintString(hStdOut, BLUE, 0, "��ǻ��: ����");
			Sleep(2000);
			PrintString(hStdOut, BLUE, 0, "=================================================");
			if (userRSP == R || userRSP == S)
			{
				PrintString(hStdOut, YELLOW, 20, "��, �й��ϼ̽��ϴ�.");
				loseNum++;
			}

			if (userRSP == P)
			{
				PrintString(hStdOut, YELLOW, 20, "�¸�!! �̰���ϴ�.");
				winNum++;
			}
		}

		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "���� ���ھ�");
		cout << winNum << "�� " << loseNum << "��" << endl;
		Sleep(2000);
		userRSP = 3;
		system("cls");
		if (loseNum >= 4)
		{
			system("cls");
			PrintString(hStdOut, RED, 10, "����!");
			PrintString(hStdOut, RED, 10, "4�� �̻� �ϼ̽��ϴ�.");
			PrintString(hStdOut, RED, 10, "3�ʵ� ����ȭ������ ���ư��ϴ�.");
			Sleep(3000);
			menu();
		}

		if (winNum >= 2)
		{
			PrintString(hStdOut, BLUE, 10, "����! 2�� �̻� �س½��ϴ�.");
			break;
		}
		system("cls");
	}

	Sleep(2000);
}