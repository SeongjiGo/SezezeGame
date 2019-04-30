#include "Quiz.h"

void printQuiz_vilige()
{
	PlaySound(TEXT("puzzle.wav"), NULL, SND_ASYNC | SND_LOOP);
	system("cls");
	static int num = 0;
	static int answerNum = 0;
	int answer, answer_;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	switch (num)
	{
	case 0:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[레이튼교수 시리즈]를 선택하셨습니다.");
		PrintString(hStdOut, WHITE, 20, "문제는 닌텐도 게임 ");
		PrintString(hStdOut, GREEN, 20, "<레이튼교수와 이상한마을>, ");
		PrintString(hStdOut, GREEN, 20, "<레이튼교수와 악마의 상자> 에서 가져왔습니다.");
		PrintString(hStdOut, GREEN, 20, "ESC키를 연속해누르면(혹은 꾹) 글자 출력이 빨라집니다.");
		PrintString(hStdOut, WHITE, 20, "BGM - 레이튼교수와 악마의상자 - puzzle");
		PrintString(hStdOut, GREEN, 20, "엔터키를 누르면 게임이 시작됩니다.");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		while (true) {
			if (kbhit() == 1)
			{
				if (getch() == 13)
				{
					num++;
					break;
				}
			}
		}

	case 1:
		system("cls");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[레이튼교수 시리즈]\n1. 귓속말 전달하기");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, GREEN, 100, "난이도 ★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "8명이 모여서 귓속말을 전달하는");
		PrintString(hStdOut, WHITE, 20, "놀이를 하려고 한다. 1명을 시작으로");
		PrintString(hStdOut, WHITE, 20, "나머지 7명에게 귓속말을 전달해야 하는데,");
		PrintString(hStdOut, WHITE, 20, "한 번에 1명에게만 전달할 수 있고, ");
		PrintString(hStdOut, WHITE, 20, "1명에게 전달하는 데는 1분이 걸린다.");
		PrintString(hStdOut, RED, 20, "모든 사람에게 귓속말이 전달되려면 최단 몇 분이 걸릴까?\n");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');// 정답: 3
		printf("ㄴ");
		if (answer == 3)
		{
			answerFunc(&num);
			explanation_oddVilige(&num);
			printQuiz_vilige();
		}
		else
			wrongFunc(2, &num);
		break;

	case 2:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[레이튼교수 시리즈]\n2. 늘어난 생쥐는?");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, GREEN, 100, "난이도 ★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "생쥐의 번식력은 무서울 정도로 왕성하다. ");
		PrintString(hStdOut, WHITE, 20, "생쥐는 한 달에 한 번씩 새끼를 낳으며");
		PrintString(hStdOut, WHITE, 20, "한번에 12마리 새끼 쥐를 낳는다고 한다. ");
		PrintString(hStdOut, WHITE, 20, "또 태어난 새끼는 생후 2개월 부터 새끼를 낳는다.");
		PrintString(hStdOut, WHITE, 20, "지금 막 태어난 생쥐를 1마리 키우기 시작했다면");
		PrintString(hStdOut, RED, 20, "10개월 뒤에는 도대체 몇 마리가 되어 있을까?\n");
		PrintString(hStdOut, BLUE, 0, "================================================="); // 정답: 1
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 1)
		{
			answerFunc(&num);
			explanation_oddVilige(&num);
			printQuiz_vilige();
		}

		else
			wrongFunc(2, &num);

		break;

	case 3:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[레이튼교수 시리즈]\n3. 침몰선 수수께끼");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, SKYBLUE, 100, "난이도 ★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "20분 후면 가라 앉게 될 여객선에 ");
		PrintString(hStdOut, WHITE, 20, "15명의 사람이 타고 있다.");
		PrintString(hStdOut, WHITE, 20, "정원 5명인 보트를 1척 사용하여 ");
		PrintString(hStdOut, WHITE, 20, "가까운 섬으로 피난 하려고 하나");
		PrintString(hStdOut, WHITE, 20, "바다에는 식인 상어가 있으므로 ");
		PrintString(hStdOut, WHITE, 20, "헤엄을 쳐서 이동하는 것은 불가능 하다.\n");
		PrintString(hStdOut, RED, 20, "여객선과 섬을 왕복하는 데는 9분이 걸린다고 하면");
		PrintString(hStdOut, RED, 20, "과연 몇 명을 살릴 수 있을까?");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 13)
		{
			answerFunc(&num);
			explanation_oddVilige(&num);
			printQuiz_vilige();
		}

		else
			wrongFunc(2, &num);

		break;

	case 4:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[레이튼교수 시리즈]\n4. 꺼지지 않는 불꽃");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, SKYBLUE, 100, "난이도 ★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "불이 켜진 양초 10개가 있었다. ");
		PrintString(hStdOut, WHITE, 20, "그런데 바람이 불어서 2개가 꺼지고 말았다.");
		PrintString(hStdOut, WHITE, 20, "그리고 잠시후에 보니 또 1개가 꺼져있었다.");
		PrintString(hStdOut, WHITE, 20, "그로부터 바람이 닿지 않도록하고");
		PrintString(hStdOut, WHITE, 20, "그 후 1개도 꺼지지 않았다면");
		PrintString(hStdOut, RED, 20, "끝까지 살아 있었던 양초는 몇 개일까?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 3
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 3)
		{
			answerFunc(&num);
			explanation_oddVilige(&num);
			printQuiz_vilige();
		}

		else
			wrongFunc(2, &num);

		break;

	case 5:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[레이튼교수 시리즈]\n5. 강아지의 산책");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 100, "난이도 ★★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "강아지를 데리고 산책을 나간 딸은");
		PrintString(hStdOut, WHITE, 20, "아빠보다 10초 먼저 출발했다.");
		PrintString(hStdOut, WHITE, 20, "아빠가 출발함과 동시에 강아지는 아빠를 향해");
		PrintString(hStdOut, WHITE, 20, "달렸고, 아빠의 발치에 도착하자 다시 방향을 바꿔");
		PrintString(hStdOut, WHITE, 20, "딸 쪽으로 달려갔다가, 딸의 발치에서 다시 아빠의");
		PrintString(hStdOut, WHITE, 20, "발치까지 달렸다. 강아지가 이런식으로 아빠와 딸 사이를");
		PrintString(hStdOut, WHITE, 20, "왕복으로 이동했을 때, 각각의 이동 속도가 강아지는");
		PrintString(hStdOut, WHITE, 20, "초속 5m, 아빠는 초속 2m, 딸은 초속 1m라고");
		PrintString(hStdOut, WHITE, 20, "하면, 아빠가 딸을 따라잡을 때 까지");
		PrintString(hStdOut, RED, 20, "강아지는 몇 m를 달렸을까?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답 10
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 50)
		{
			answerFunc(&num);
			explanation_oddVilige(&num);
			printQuiz_vilige();
		}

		else
			wrongFunc(2, &num);

		break;

	case 6:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[레이튼교수 시리즈]\n6. 숫자 사이클");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, PINK, 100, "난이도 ★★★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "g\n");
		PrintString(hStdOut, YELLOW, 20, "「4 -> 16 -> 37 -> 58 -> ?? -> 145 -> 42 -> 20 -> 4");
		PrintString(hStdOut, YELLOW, 20, "    -> 16 -> 37 -> 58 -> ?? -> 145 -> 42 -> 20 -> 4");
		PrintString(hStdOut, YELLOW, 20, "  -> 16 -> 37 -> 이후 반복 -----------------------」\n");
		PrintString(hStdOut, RED, 20, "??에 들어갈 숫자는 무엇일까?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 89
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 89)
		{
			answerFunc(&num);
			explanation_oddVilige(&num);
			printQuiz_vilige();
		}

		else
			wrongFunc(2, &num);

		break;

	case 7:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[레이튼교수 시리즈]\n7. 공평한 분배");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, PINK, 100, "난이도 ★★★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "세 집이 공동으로 소유하고 있는 뜰이 있었다.");
		PrintString(hStdOut, WHITE, 20, "각각의 집주인 ABC가 같은 양만큼 일을 해서");
		PrintString(hStdOut, WHITE, 20, "잔디를 심기로 했는데 C가 부상을 입는 바람에");
		PrintString(hStdOut, WHITE, 20, "결국 A가 5일, B가 4일을 일해서 잔디 심는 일을 모두 마쳤다.\n");
		PrintString(hStdOut, WHITE, 20, "C는 두 사람에게 수고비로 금화 9개를 지불했고, ");
		PrintString(hStdOut, WHITE, 20, "두 사람은 일을 한 양 만큼 나눠가졌다.");
		PrintString(hStdOut, RED, 20, "각자 몇 개씩을 가졌을까?");
		PrintString(hStdOut, WHITE, 20, "(A와 B를 순서대로 띄어쓰기로 구분하여 입력하시오.)");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 6 3
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer >> answer_; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 6 && answer_ == 3)
		{
			answerFunc(&num);
			explanation_oddVilige(&num);
			printQuiz_vilige();
		}

		else
			wrongFunc(2, &num);

		break;

	case 8:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[레이튼교수 시리즈]\n8. 샘의 출근일");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, RED, 100, "난이도 ★★★★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 20, "「오늘이 휴일이라고 치자. 어제가 휴일이었다면");
		PrintString(hStdOut, YELLOW, 20, "  내일은 출근일이야. 그럼 이번에는 오늘이 ");
		PrintString(hStdOut, YELLOW, 20, "  출근일이라고 치자. 그저께가 출근일이 아니었다면");
		PrintString(hStdOut, YELLOW, 20, "  내일은 출근일이고, 출근일이었다면 내일은 휴일이야.」\n");
		PrintString(hStdOut, RED, 20, "그럼 1년을 365일로 잡았을 때 이 회사의 출근일은 총 며칠일까?");
		PrintString(hStdOut, WHITE, 20, "(일요일, 공휴일은 생각하지 않기로 한다.)");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 219
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 219)
		{
			answerFunc(&num);
			explanation_oddVilige(&num);
			printQuiz_vilige();
		}

		else
			wrongFunc(2, &num);

		break;


	case 9:
		
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[레이튼교수 시리즈]\n9. 500의 진주");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, RED, 100, "난이도 ★★★★★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "마법사는 모험가에게 이렇게 말했다.\n");
		PrintString(hStdOut, YELLOW, 20, "「이 동굴에는 500개의 진주가 있다. ");
		PrintString(hStdOut, YELLOW, 20, "  거기서 특정 수만큼 진주를 가져오너라.");
		PrintString(hStdOut, YELLOW, 20, "  그 수는 2부터 7까지의 어떤 수로 나누어 반드시");
		PrintString(hStdOut, YELLOW, 20, "  1이 남는 애매한 수. 조건에는 맞게 진주를 가지고 오면,");
		PrintString(hStdOut, YELLOW, 20, "  그 진주를 모두 그대에게 주겠노라.」\n");
		PrintString(hStdOut, WHITE, 20, "하지만 모험가는 실수로, 4로 나누었을 때만 조건에");
		PrintString(hStdOut, WHITE, 20, "맞지 않는 수를 가져오고 말았다.");
		PrintString(hStdOut, RED, 20, "과연 몇 개를 가져왔을까?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 211
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 211)
		{
			answerFunc(&num);
			explanation_oddVilige(&num);
			printQuiz_vilige();
		}

		else
			wrongFunc(2, &num);

		break;
		

	case 10:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[레이튼교수 시리즈]\n10. 카드 경기");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, RED, 100, "난이도 ★★★★★★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "몇 명이 모여서 돌아가며 경기를 하는 리그전");
		PrintString(hStdOut, WHITE, 20, "방식으로 카드 대회를 열었다.");
		PrintString(hStdOut, WHITE, 20, "참가자인 죠니는 몇 번 경기를 한 후 중간에");
		PrintString(hStdOut, WHITE, 20, "일이 생겨서 기권을 하고 나가게 되었다.");
		PrintString(hStdOut, WHITE, 20, "그날 치러진 경기는 총 59경기.");
		PrintString(hStdOut, RED, 20, "죠니는 몇 경기를 마치고 기권했을까?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 4
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 4)
		{
			answerFunc(&num);
			explanation_oddVilige(&num);
			printQuiz_vilige();
		}

		else
			wrongFunc(2, &num);

		break;
	}
	menu();
}

void explanation_oddVilige(int *num)
{
	system("cls");
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	switch ((*num)-1)
	{
	case 1:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "1번 문제 풀이");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "아이~ 쉽다!\n");
		PrintString(hStdOut, WHITE, 10, "같은 사람이 여러 번 전달하면 3분 만에 끝난다.\n");
		PrintString(hStdOut, WHITE, 10, "제일 처음 귓속말을 한 사람은 3명에게, \n");
		PrintString(hStdOut, WHITE, 10, "제일 처음 귓속말을 들은 사람은 2명에게 전달하면 된다.\n");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 211
		cout << "계속 푸시려면 엔터키를 입력하시오.";
		while (true) {
			if (kbhit() == 1)
			{
				if (getch() == 13)
				{
					*num++;
					break;
				}
			}
		}
		break;

	case 2:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "2번 문제 풀이");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "1...?");
		PrintString(hStdOut, WHITE, 10, "생쥐는 혼자 새끼를 낳을 수는 없다.");
		PrintString(hStdOut, YELLOW, 10, "화내지말고 생쥐에게 위로해주자. ");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 211
		cout << "계속 푸시려면 엔터키를 입력하시오.";
		while (true) {
			if (kbhit() == 1)
			{
				if (getch() == 13)
				{
					num++;
					break;
				}
			}
		}
		break;

	case 3:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "3번 문제 풀이");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "구명보트는 로봇이 아니야!");
		PrintString(hStdOut, WHITE, 10, "구명보트를 타고 오는데에는 사람 한 명이 반드시");
		PrintString(hStdOut, WHITE, 10, "필요하다. 20분동안 3번을 태울 수 있는데");
		PrintString(hStdOut, WHITE, 10, "운전자 제외 총 12명을 태울 수 있으므로");
		PrintString(hStdOut, WHITE, 10, "운전자 까지 13명이 살아 남을 수 있다.");
		PrintString(hStdOut, WHITE, 10, "남은 2명은 아쉽게도...");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 211
		cout << "계속 푸시려면 엔터키를 입력하시오.";
		while (true) {
			if (kbhit() == 1)
			{
				if (getch() == 13)
				{
					num++;
					break;
				}
			}
		}
		break;

	case 4:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "4번 문제 풀이");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "양초가 녹지 않고 계속 탄다면 과학계의 큰 혁명");
		PrintString(hStdOut, WHITE, 10, "\'남는\'양초는 불이 꺼진 양초의 개수와 동일하다");
		PrintString(hStdOut, WHITE, 10, "불이 안꺼진 양초는 모두 녹아서 없어지기 때문이다.\n");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 211
		cout << "계속 푸시려면 엔터키를 입력하시오.";
		while (true) {
			if (kbhit() == 1)
			{
				if (getch() == 13)
				{
					num++;
					break;
				}
			}
		}
		break;

	case 5:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "5번 문제 풀이");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "아빠가 딸을 따라잡을 때까지 강아지는");
		PrintString(hStdOut, WHITE, 10, "계속 일정한 속도로 달리고 있었다.");
		PrintString(hStdOut, WHITE, 10, "10m였던 아빠와 딸의 거리는 매초");
		PrintString(hStdOut, WHITE, 10, "1m씩 줄어들므로, 따라잡기까지는");
		PrintString(hStdOut, WHITE, 10, "10초가 걸린다. 강아지는 초속 5m로");
		PrintString(hStdOut, WHITE, 10, "달리므로, 정답은 당연히 50m.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 211
		cout << "계속 푸시려면 엔터키를 입력하시오.";
		while (true) {
			if (kbhit() == 1)
			{
				if (getch() == 13)
				{
					num++;
					break;
				}
			}
		}
		break;

	case 6:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "6번 문제 풀이");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "각 자리를 한 자리로 빼와서 제곱 한 후");
		PrintString(hStdOut, WHITE, 10, "더하면 된다.");
		PrintString(hStdOut, WHITE, 10, "58 -> 5^2 + 8^2 == 89");
		PrintString(hStdOut, WHITE, 10, "답을 알면 허무한 법.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 211
		cout << "계속 푸시려면 엔터키를 입력하시오.";
		while (true) {
			if (kbhit() == 1)
			{
				if (getch() == 13)
				{
					num++;
					break;
				}
			}
		}
		break;

	case 7:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "7번 문제 풀이");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "A가 6개, B가 3개를 갖게 된다.");
		PrintString(hStdOut, WHITE, 10, "각자 5개와 4개를 갖는다고 대답하기");
		PrintString(hStdOut, WHITE, 10, "쉽지만, 다음과 같이 생각해 보면 이는");
		PrintString(hStdOut, WHITE, 10, "정답이 아님을 알 수 있다.");
		PrintString(hStdOut, WHITE, 10, "A, B는 자신들의 몫으로 3일 치를");
		PrintString(hStdOut, WHITE, 10, "일해야 하므로, 그 부분은 계산에서");
		PrintString(hStdOut, WHITE, 10, "빼야 한다. 즉, C의 몫인 3일을");
		PrintString(hStdOut, WHITE, 10, "2일과 1일로 나눠 맡은 셈이 된다.");
		PrintString(hStdOut, WHITE, 10, "즉, 금화는 2대 1로 배분하면 된다.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 211
		cout << "계속 푸시려면 엔터키를 입력하시오.";
		while (true) {
			if (kbhit() == 1)
			{
				if (getch() == 13)
				{
					num++;
					break;
				}
			}
		}
		break;

	case 8:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "8번 문제 풀이");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "설명이 복잡해서 헷갈릴 뿐, 정리해 보면");
		PrintString(hStdOut, WHITE, 10, "[3일 연속 출근, 2일 연속 휴일]이 ");
		PrintString(hStdOut, WHITE, 10, "반복되는 상황이다. 즉, 5일 중 3일을");
		PrintString(hStdOut, WHITE, 10, "출근하는 셈이므로, 출근일은 365일의");
		PrintString(hStdOut, WHITE, 10, "5분의 3, 즉 219일이다.");

		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 211
		cout << "계속 푸시려면 엔터키를 입력하시오.";
		while (true) {
			if (kbhit() == 1)
			{
				if (getch() == 13)
				{
					num++;
					break;
				}
			}
		}
		break;

	case 9:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "9번 문제 풀이");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "난이도가 급상승했다.");
		PrintString(hStdOut, WHITE, 10, "마법사가 말한 수는 2, 3, 4, 5, 6, 7로");
		PrintString(hStdOut, WHITE, 10, "나누어 떨어지는 수에 1을 더한 수.");
		PrintString(hStdOut, WHITE, 10, "각 수의 최소 공배수인 420에 1을 더한 421이다.");
		PrintString(hStdOut, WHITE, 10, "모험가가 가지고 온 수는 4로 나눌 때만");
		PrintString(hStdOut, WHITE, 10, "조건에 맞지 않는다고 했으므로, 2, 3, 5, 6, 7로");
		PrintString(hStdOut, WHITE, 10, "나누어 떨어지는 수에 1을 더하면 된다.");
		PrintString(hStdOut, WHITE, 10, "500을 넘는 수는 생각할 필요가 없다..");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 211
		cout << "계속 푸시려면 엔터키를 입력하시오.";
		while (true) {
			if (kbhit() == 1)
			{
				if (getch() == 13)
				{
					num++;
					break;
				}
			}
		}
		break;


	case 10:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "10번 문제 풀이");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "난이도가 더욱 급상승 했다.");
		PrintString(hStdOut, WHITE, 10, "우선 총 경기 수는 「(1/2) * n * (n-1)」 이므로");
		PrintString(hStdOut, WHITE, 10, "11명이 참가했다면 55경기, 12명이 참가했다면 66경기");
		PrintString(hStdOut, WHITE, 10, "였을 것이다. 59경기가 치러졌으므로");
		PrintString(hStdOut, WHITE, 10, "참가 인원수는 12명.");
		PrintString(hStdOut, WHITE, 10, "66에서 59를 빼면 죠니가 기권한");
		PrintString(hStdOut, WHITE, 10, "경기수를 알 수 있고 12명이 펼치는 리그전에서는");
		PrintString(hStdOut, WHITE, 10, "1명이 다른 11명과 겨루게 되므로,");
		PrintString(hStdOut, WHITE, 10, "11 - 7 == 4 경기가 정답");
		PrintString(hStdOut, RED, 10, "만약 찬스를 하나도 안쓰고 왔다면 상위 0.1%의 뇌를 가지고있고");
		PrintString(hStdOut, RED, 10, "만약 찬스를 쓰며 왔다면 당신의 끈기에 박수를 보냅니다.");
		PrintString(hStdOut, RED, 10, "수고 많으셨습니다! 모든 문제적남자 문제를 풀어내셨습니다.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 211
		cout << "계속 푸시려면 엔터키를 입력하시오.";
		while (true) {
			if (kbhit() == 1)
			{
				if (getch() == 13)
				{
					break;
				}
			}
		}
		break;

	}
}