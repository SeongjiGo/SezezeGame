#include "Quiz.h"

void gameMenu() // 게임전용
{
	int menuNum = 4;
	int key;
	PlaySound(TEXT("로비BGM.wav"), NULL, SND_ASYNC | SND_LOOP);
	enum {
		UP = 72, DOWN = 80, SPACE = 32
	};

	enum {
		UPDOWN = 4, RSP = 3, MAZE = 2, MAIN = 1
	};

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, YELLOW, 20, "★ 미 . 니 . 게 . 임 . 존 ★ ");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 20, "다음 문제로 스킵하기위한 미니게임을 자유롭게 할 수 있는 공간입니다.");
	PrintString(hStdOut, WHITE, 20, "게임을 성공하더라도 아무런 보상이 없으며 성공시에 메인메뉴로 다시 돌아갑니다.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 20, "즐기실 게임의 종류를 선택해주십시오.(방향키로 이동 후 스페이스바)\n");
	PrintString(hStdOut, WHITE, 20, "[1]Up & Down 게임\n");
	PrintString(hStdOut, WHITE, 20, "[2]가위바위보 게임\n");
	PrintString(hStdOut, RED, 20, "[3]미로게임(사용불가)\n");
	PrintString(hStdOut, WHITE, 20, "[4]메인화면\n");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	do
	{
		if (menuNum == UPDOWN)
		{
			gotoxy(25, 8);
			cout << "☜";
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
				cout << "☜";
				menuNum++;
				break;
			}

			if (menuNum == MAZE)
			{
				gotoxy(25, 12);
				cout << " ";
				gotoxy(25, 10);
				cout << "☜";
				menuNum++;
				break;
			}

			if (menuNum == MAIN)
			{
				gotoxy(25, 14);
				cout << " ";
				gotoxy(25, 12);
				cout << "☜";
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
				cout << "☜";
				menuNum--;
				break;
			}

			if (menuNum == RSP)
			{
				gotoxy(25, 10);
				cout << " ";
				gotoxy(25, 12);
				cout << "☜";
				menuNum--;
				break;
			}

			if (menuNum == MAZE)
			{
				gotoxy(25, 12);
				cout << " ";
				gotoxy(25, 14);
				cout << "☜";
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
	case UPDOWN: //업다운게임
		UpDownGame();
		break;

	case RSP: //가위바위보게임
		RSPGame();
		break;

	case MAZE: //미로게임
		system("cls");
		cout << "죄송합니다. 이 기능은 현재 사용하실 수 없습니다." << endl;
		Sleep(2000);
		gameMenu();
		break;

	case MAIN: // 메인화면으로 이동
		menu();
		break;
	}
	PrintString(hStdOut, WHITE, 10, "단, 미니게임전용이므로 아무런 보상이 없습니다.");
	PrintString(hStdOut, WHITE, 10, "잠시 후 메인화면으로 돌아갑니다.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	Sleep(3000);
	menu();
}

void gameMenu(int *num) // 찬스전용
{
	int menuNum = 4;
	int key;
	PlaySound(TEXT("로비BGM.wav"), NULL, SND_ASYNC | SND_LOOP);
	enum {
		UP = 72, DOWN = 80, SPACE = 32
	};

	enum {
		UPDOWN = 4, RSP = 3, MAZE = 2, MAIN = 1
	};

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, YELLOW, 20, "★ 미 . 니 . 게 . 임 . 존 ★ ");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 20, "다음 문제로 스킵할 찬스를 얻을 수 있는 미니게임 존입니다.");
	PrintString(hStdOut, WHITE, 20, "게임에 성공하게 되면 해답을 공개하고 다음문제로 넘어갈 수 있습니다.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, YELLOW, 20, "도전하실 게임의 종류를 선택해주십시오.(방향키로 이동 후 스페이스바)\n");
	PrintString(hStdOut, WHITE, 20, "[1]Up & Down 게임\n");
	PrintString(hStdOut, WHITE, 20, "[2]가위바위보 게임\n");
	PrintString(hStdOut, RED, 20, "[3]미로게임(사용불가)\n");
	PrintString(hStdOut, WHITE, 20, "[4]메인화면\n");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	do
	{
		if (menuNum == UPDOWN)
		{
			gotoxy(25, 8);
			cout << "☜";
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
				cout << "☜";
				menuNum++;
				break;
			}

			if (menuNum == MAZE)
			{
				gotoxy(25, 12);
				cout << " ";
				gotoxy(25, 10);
				cout << "☜";
				menuNum++;
				break;
			}

			if (menuNum == MAIN)
			{
				gotoxy(25, 14);
				cout << " ";
				gotoxy(25, 12);
				cout << "☜";
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
				cout << "☜";
				menuNum--;
				break;
			}

			if (menuNum == RSP)
			{
				gotoxy(25, 10);
				cout << " ";
				gotoxy(25, 12);
				cout << "☜";
				menuNum--;
				break;
			}

			if (menuNum == MAZE)
			{
				gotoxy(25, 12);
				cout << " ";
				gotoxy(25, 14);
				cout << "☜";
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
	case UPDOWN: //레이튼교수 시리즈
		UpDownGame();
		break;

	case RSP: //문제적 남자
		RSPGame();
		break;

	case MAZE: //미로게임
		system("cls");
		cout << "죄송합니다. 이 기능은 현재 사용하실 수 없습니다." << endl;
		Sleep(2000);
		gameMenu(num);
		break;

	case MAIN: // 메인화면
		menu();
		break;
	}
	PrintString(hStdOut, WHITE, 10, "문제의 해답을 보여주고 엔터키를 누르시면 다음 문제가 나옵니다.");
	PrintString(hStdOut, WHITE, 10, "잠시 후 정답을 맞춘 상황이 연출됩니다.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	
}
void UpDownGame()
{
	int randNum, userNum, remainChance = 6;
	system("cls");
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	PlaySound(TEXT("UpDown.wav"), NULL, SND_ASYNC | SND_LOOP);

	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 20, "Up&Down 게임을 선택하셨습니다.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, WHITE, 20, "사용자가 난수를 생성하고 이를 맞추는 게임입니다.");
	PrintString(hStdOut, GREEN, 20, "난수보다 높은 숫자를 입력하면 Down! 을 출력하고");
	PrintString(hStdOut, GREEN, 20, "난수보다 낮은 숫자를 입력하면 Up! 을 출력합니다.");
	PrintString(hStdOut, RED, 20, "성공 조건: 1부터 100까지의 숫자를 6번안에 맞추면 성공"); 
	PrintString(hStdOut, GREEN, 20, "엔터키를 누르면 게임이 시작됩니다.");
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
	PrintString(hStdOut, YELLOW, 10, "Up & Down게임을 시작합니다.");
	Sleep(2000);
	srand(time(NULL));
	randNum = rand() % 99 + 1;
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, RED, 10, "프로그램이 1~100 사이의 난수를 생성했습니다.");
	PrintString(hStdOut, RED, 10, "6번 만에 이 숫자를 맞춰보세요!");
	PrintString(hStdOut, RED, 10, "잠시 후 시작 됩니다.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	Sleep(3000);
	while (true)
	{
		if (remainChance <= 0)
		{
			system("cls");
			PrintString(hStdOut, RED, 10, "실패!");
			PrintString(hStdOut, RED, 10, "남은 기회가 모두 소진되었습니다.");
			PrintString(hStdOut, RED, 10, "3초뒤 메인화면으로 돌아갑니다.");
			Sleep(3000);
			menu();
		}
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 10, ("남은기회 ")); cout << remainChance << endl;
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "숫자입력 ");
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
			PrintString(hStdOut,GREEN, 10, "성공! 숫자를 맞췄습니다.");
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
	PrintString(hStdOut, RED, 20, "가위바위보 게임을 선택하셨습니다.");
	PrintString(hStdOut, BLUE, 0, "=================================================");
	PrintString(hStdOut, GREEN, 20, "여러분이 흔히 아는 가위바위보 게임입니다.");
	PrintString(hStdOut, GREEN, 20, "가위 바위 보 중 하나를 정하시고 2초 뒤에");
	PrintString(hStdOut, GREEN, 20, "컴퓨터가 완전한 랜덤값으로 가위 바위 보 중 하나를 냅니다.");
	PrintString(hStdOut, GREEN, 20, "5판 중 2판을 이기면 성공합니다.");
	PrintString(hStdOut, BLUE, 20, "너무 쉽지 않냐고요?");
	PrintString(hStdOut, RED, 20, "아닙니다. 비기는 것도 판 횟수에 들어갑니다. 그럼 어렵죠?");
	PrintString(hStdOut, GREEN, 20, "엔터키를 누르면 게임이 시작됩니다.");
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
		PrintString(hStdOut, GREEN, 10, "가위, 바위, 보 중 하나를 선택하세요 (SPACE 바)");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 10, "[1] 바위 (묵)\n");
		PrintString(hStdOut, YELLOW, 10, "[2] 가위 (찌)\n");
		PrintString(hStdOut, YELLOW, 10, "[3] 보 (빠)\n");
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
				cout << "☜";
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
					cout << "☜";
					userRSP++;
					break;
				}

				if (userRSP == PAPER)
				{
					gotoxy(20, 7);
					cout << " ";
					gotoxy(20, 5);
					cout << "☜";
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
					cout << "☜";
					userRSP--;
					break;
				}

				if (userRSP == SCISSOR)
				{
					gotoxy(20, 5);
					cout << " ";
					gotoxy(20, 7);
					cout << "☜";
					userRSP--;
					break;
				}

				if (userRSP == PAPER)
					continue;
				break;
			}
		} while (key != SPACE);

		system("cls");
		if (userRSP == R) // 바위
		{
			PrintString(hStdOut, YELLOW, 10, "바위를 선택하셨습니다.");
		}

		else if (userRSP == S) // 가위
		{
			PrintString(hStdOut, YELLOW, 10, "가위를 선택하셨습니다.");
		}

		else if (userRSP == P) // 보
		{
			PrintString(hStdOut, YELLOW, 10, "보를 선택하셨습니다.");
		}

		else
		{
			cout << "다시 입력하세요!" << endl;
			i--;
			continue;
		}
		PrintString(hStdOut, BLUE, 0, "=================================================");
		Sleep(1000);
		comRSP = rand() % 2 + 1;
		PrintString(hStdOut, RED, 50, "안  내면 진 거  가위바위보!!");
		
		if (comRSP == R) // 바위
		{
			PrintString(hStdOut, BLUE, 0, "컴퓨터: 바위");
			Sleep(2000);
			PrintString(hStdOut, BLUE, 0, "=================================================");
			if (userRSP == R || userRSP == S)
			{
				PrintString(hStdOut, YELLOW, 20, "네, 패배하셨습니다.");
				loseNum++;
			}
			
			if (userRSP == P)
			{
				PrintString(hStdOut, YELLOW, 20, "승리!! 이겼습니다.");
				winNum++;
			}
		}

		else if (comRSP == S) // 가위
		{
			PrintString(hStdOut, BLUE, 0, "컴퓨터: 가위");
			Sleep(2000);
			PrintString(hStdOut, BLUE, 0, "=================================================");
			if (userRSP == S || userRSP == P)
			{
				PrintString(hStdOut, YELLOW, 20, "네, 패배하셨습니다.");
				loseNum++;
			}

			if (userRSP == R)
			{
				PrintString(hStdOut, YELLOW, 20, "승리!! 이겼습니다.");
				winNum++;
			}
		}

		else if (comRSP == P) // 보
		{
			PrintString(hStdOut, BLUE, 0, "컴퓨터: 바위");
			Sleep(2000);
			PrintString(hStdOut, BLUE, 0, "=================================================");
			if (userRSP == R || userRSP == S)
			{
				PrintString(hStdOut, YELLOW, 20, "네, 패배하셨습니다.");
				loseNum++;
			}

			if (userRSP == P)
			{
				PrintString(hStdOut, YELLOW, 20, "승리!! 이겼습니다.");
				winNum++;
			}
		}

		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "현재 스코어");
		cout << winNum << "승 " << loseNum << "패" << endl;
		Sleep(2000);
		userRSP = 3;
		system("cls");
		if (loseNum >= 4)
		{
			system("cls");
			PrintString(hStdOut, RED, 10, "실패!");
			PrintString(hStdOut, RED, 10, "4패 이상 하셨습니다.");
			PrintString(hStdOut, RED, 10, "3초뒤 메인화면으로 돌아갑니다.");
			Sleep(3000);
			menu();
		}

		if (winNum >= 2)
		{
			PrintString(hStdOut, BLUE, 10, "성공! 2승 이상 해냈습니다.");
			break;
		}
		system("cls");
	}

	Sleep(2000);
}