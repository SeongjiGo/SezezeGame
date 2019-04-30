#include "Quiz.h"

void printQuiz_hotBrain()
{
	PlaySound(TEXT("hotBrain.wav"), NULL, SND_ASYNC | SND_LOOP);
	system("cls");
	static int num = 10;
	static int answerNum = 0;
	int answer, answer2;
	char answer_;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	switch (num)
	{
	case 0:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[문제적남자 시리즈]를 선택하셨습니다.");
		PrintString(hStdOut, GREEN, 20, "문제는 tvN 프로그램 \"문제적 남자\"에서 가져왔습니다. ");
		PrintString(hStdOut, GREEN, 20, "ESC키를 연속해누르면(혹은 꾹) 글자 출력이 빨라집니다.");
		PrintString(hStdOut, WHITE, 20, "BGM - Trontemoller - Miss You");
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
		PrintString(hStdOut, WHITE, 20, "[문제적남자 시리즈]\n1. 물음표에 들어갈 숫자는??");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, GREEN, 100, "난이도 ★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "홍콩 초등학교 기출문제라고 한다. ");
		PrintString(hStdOut, WHITE, 20, "다음 물음표에 들어갈 숫자는 무엇일까??");
		PrintString(hStdOut, WHITE, 20, "16 - 06 - 68 - 88 - ? - 98");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n'); // 정답: 87
		printf("ㄴ");
		if (answer == 87)
		{
			answerFunc(&num);
			explanation_hotbrain(&num);
			printQuiz_hotBrain();
		}

		else
			wrongFunc(1, &num);

		break;

	case 2:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[문제적남자 시리즈]\n2. 빠진 알파벳은??");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, GREEN, 100, "난이도 ★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "다음 알파벳 문자들은 공통점이 있다");
		PrintString(hStdOut, WHITE, 20, "이 열에서 빠진 문자열은 무엇일까??");
		PrintString(hStdOut, WHITE, 20, "B C D E I K O X");
		PrintString(hStdOut, RED, 20, "문자 한 글자만 입력하시오.\n");
		PrintString(hStdOut, BLUE, 0, "================================================="); // 정답: 1
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer_; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer_ == 'H')
		{
			answerFunc(&num);
			explanation_hotbrain(&num);
			printQuiz_hotBrain();
		}

		else
			wrongFunc(1, &num);

		break;

	case 3:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[문제적남자 시리즈]\n3. 다음에 올 알파벳은?");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, SKYBLUE, 100, "난이도 ★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "N W H O I ()");
		PrintString(hStdOut, RED, 20, "다음에 올 알파벳은 무엇인가?(알파벳 하나만 입력하십시오)");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer_; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer_ == 'I' || answer_ == 'i')
		{
			answerFunc(&num);
			explanation_hotbrain(&num);
			printQuiz_hotBrain();
		}

		else
			wrongFunc(1, &num);

		break;

	case 4:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[문제적남자 시리즈]\n4. 숫자야구");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, SKYBLUE, 100, "난이도 ★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "흰 원은 맞는 숫자의 개수를 의미하고,");
		PrintString(hStdOut, WHITE, 20, "검은 원은 숫자와 위치가 모두 맞는 것을 의미한다.");
		PrintString(hStdOut, YELLOW, 0, "3 9 2 2 4\t●");
		PrintString(hStdOut, YELLOW, 0, "7 7 4 6 3\t● ○ ○");
		PrintString(hStdOut, YELLOW, 0, "7 7 1 2 4\t○ ○ ○");
		PrintString(hStdOut, YELLOW, 0, "2 9 1 8 1\t● ○");
		PrintString(hStdOut, YELLOW, 0, "? ? ? ? ?\t● ● ● ● ●");
		PrintString(hStdOut, YELLOW, 0, "정답 입력 ");
		PrintString(hStdOut, RED, 20, "물음표에 들어갈 숫자는? (띄어쓰기 없이 입력)");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 19767
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 19767)
		{
			answerFunc(&num);
			explanation_hotbrain(&num);
			printQuiz_hotBrain();
		}

		else
			wrongFunc(1, &num);

		break;

	case 5:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[문제적남자 시리즈]\n5. 물음표에 들어갈 숫자는?");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 100, "난이도 ★★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 20, "124 - 479 - 462 - 586 - 248 - 2?1 - 355");
		PrintString(hStdOut, RED, 20, "물음표에 들어갈 숫자는?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답 3
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 3)
		{
			answerFunc(&num);
			explanation_hotbrain(&num);
			printQuiz_hotBrain();
		}

		else
			wrongFunc(1, &num);

		break;

	case 6:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[문제적남자 시리즈]\n6. 매직 다이어리");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, PINK, 100, "난이도 ★★★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "라온의 매직 다이어리에는 요일마다 알 수 없는");
		PrintString(hStdOut, WHITE, 20, "숫자가 적혀 있다. 물음표에 들어갈 것은?");
		PrintString(hStdOut, WHITE, 20, "M O N = 3");
		PrintString(hStdOut, WHITE, 20, "T U E = 5");
		PrintString(hStdOut, WHITE, 20, "W E D = 4");
		PrintString(hStdOut, WHITE, 20, "T H U = ?");
		PrintString(hStdOut, RED, 20, "?에 들어갈 숫자는 무엇일까?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 89
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 6)
		{
			answerFunc(&num);
			explanation_hotbrain(&num);
			printQuiz_hotBrain();
		}

		else
			wrongFunc(1, &num);

		break;

	case 7:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[문제적남자 시리즈]\n7. 씨애랑의 문제 노트");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, PINK, 100, "난이도 ★★★★★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "403937139 = 7");
		PrintString(hStdOut, WHITE, 20, "112407852 = 39");
		PrintString(hStdOut, WHITE, 20, "305137136 = 158");
		PrintString(hStdOut, WHITE, 20, "790921078 = 0");
		PrintString(hStdOut, WHITE, 20, "184755209 = ?");
		PrintString(hStdOut, RED, 20, "물음표에 들어갈 숫자는?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 56
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 56)
		{
			answerFunc(&num);
			explanation_hotbrain(&num);
			printQuiz_hotBrain();
		}

		else
			wrongFunc(1, &num);

		break;

	case 8:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[문제적남자 시리즈]\n8. 해적 금화");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, RED, 100, "난이도 ★★★★★★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "5명의 해적이 발견한 금화 1,000냥 중 규칙에 맞게");
		PrintString(hStdOut, WHITE, 20, "최대한 많은 금화를 가질 때, 그 수는? (당신은 해적 5)");
		PrintString(hStdOut, YELLOW, 20, "1. 숫자가 높을수록 서열이 높고, 서열 순으로 분배안 제안 후 찬반 투표");
		PrintString(hStdOut, YELLOW, 20, "2. 50% 이상 찬성(본인 포함)하면 분배안 통과, 미달 시 제안자는 죽고, 다음 서열인 자가 분배안을 다시 제안");
		PrintString(hStdOut, YELLOW, 20, "3. 해적은 사전에 모의 X, 본인의 이익만을 생각, 표를 행사");
		PrintString(hStdOut, YELLOW, 20, "4. 다음 해적으로부터 같은 양의 금화를 받을 수 있다면 분배안에 반대");
		PrintString(hStdOut, RED, 20, "당신은 금화를 최대 몇 개를 받을 수 있을까?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 998
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 998)
		{
			answerFunc(&num);
			explanation_hotbrain(&num);
			printQuiz_hotBrain();
		}

		else
			wrongFunc(1, &num);

		break;


	case 9:

		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[문제적남자 시리즈]\n9. 물음표에 들어갈 것은?");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, RED, 100, "난이도 ★★★★★★★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "박보검과 차은우의 \'한 여름밤, 씨애랑 콘서트\'티켓은");
		PrintString(hStdOut, WHITE, 20, "이메일로 뇌섹 인증 후 구매할 수 있다.");
		PrintString(hStdOut, RED, 20, "물음표에 들어갈 것은?");
		PrintString(hStdOut, YELLOW, 20, "2  4  6  30 32 34 36 40 42 44\n46 50 52 54 56 60 62 64 66 ?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 1000
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 1000)
		{
			answerFunc(&num);
			explanation_hotbrain(&num);
			printQuiz_hotBrain();
		}

		else
			wrongFunc(1, &num);

		break;

	case 10:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "[문제적남자 시리즈]\n10. 셰릴의 생일은?");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, RED, 100, "난이도 ★★★★★★★★★★");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "엘버트와 버나드는 셰릴의 생일을 알고 싶어 한다.");
		PrintString(hStdOut, WHITE, 20, "셰릴은 두 친구 에게 10개의 날짜를 줬다.");
		PrintString(hStdOut, YELLOW, 20, "<5월 15일> , <5월 16일>, <5월 19일>");
		PrintString(hStdOut, YELLOW, 20, "<6월 17일> ,             <6월 18일>");
		PrintString(hStdOut, YELLOW, 20, "<7월 14일> ,             <7월 16일>");
		PrintString(hStdOut, YELLOW, 20, "<8월 14일> , <8월 17일>, <8월 15일>");
		PrintString(hStdOut, WHITE, 20, "-----------------------------------------------");
		PrintString(hStdOut, WHITE, 20, "다음 대화 내용을 보자.");
		PrintString(hStdOut, YELLOW, 20, "엘버트: 셰릴의 생일이 언제인지 나도 모르겠어.");
		PrintString(hStdOut, YELLOW, 20, "        너도 셰릴의 생일은 모른다는 걸 알아~");
		PrintString(hStdOut, YELLOW, 20, "\n버나드: 나도 셰릴의 생일이 언제인지\n        처음에는 몰랐지만 이제는 알아");
		PrintString(hStdOut, YELLOW, 20, "\n엘버트: 나도 이제 셰릴의 생일이 언제인지 알았어");
		PrintString(hStdOut, WHITE, 20, "\n셰릴은 엘버트한테는 달(月)만 알려주고");
		PrintString(hStdOut, WHITE, 20, "       버나트한테는 날(日)만 알려줬다.\n");
		PrintString(hStdOut, RED, 20, "셰릴의 생일은 언제일까?");
		PrintString(hStdOut, RED, 20, "(띄어쓰기로 구분하여 월과 일을 순서대로 입력)");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 4
		PrintString(hStdOut, YELLOW, 0, "정답 입력 "); cin >> answer >> answer2; cin.ignore(1, '\n');
		printf("ㄴ");
		if (answer == 7 && answer2 == 16)
		{
			answerFunc(&num);
			explanation_hotbrain(&num);
			printQuiz_hotBrain();
		}

		else
			wrongFunc(1, &num);

		break;
	}
	menu();
}

void explanation_hotbrain(int *num)
{
	system("cls");
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	switch ((*num)-1)
	{
	case 1:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "1번 문제 풀이");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "좋아하긴 이르다. 이 문제는 '초등학교' 문제이다.\n");
		PrintString(hStdOut, WHITE, 10, "숫자를 위아래로 뒤집어 보자\n");
		PrintString(hStdOut, WHITE, 10, "86 \'87\' 88 89 90 91 임을 알 수 있다. \n");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 87
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

	case 2:
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "2번 문제 풀이");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "알파벳이 위 아래로 대칭이다.");
		PrintString(hStdOut, WHITE, 10, "위아래 대칭인 알파벳중에 빠진 알파벳은 \'H\'이다.");
		PrintString(hStdOut, WHITE, 10, "아직은 풀 만하다.. 아직은...");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: H
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
		PrintString(hStdOut, WHITE, 10, "원 앤 투 앤 쓰리 앤 포");
		PrintString(hStdOut, WHITE, 10, "알파벳의 2번째 글자를 순서대로 나열 한 것이다.");
		PrintString(hStdOut, WHITE, 10, "O\'N\'E, T\'W\'O, T\'H\'REE, F\'O\'UR F\'I\'VE S\'I\'X");
		PrintString(hStdOut, WHITE, 10, "따라서 I 또는 i가 정답이다.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: I or i
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
		PrintString(hStdOut, WHITE, 10, "어려워지기전 쉬어가는 문제, 숫자야구");
		PrintString(hStdOut, WHITE, 10, "정답은 19767이다.");
		PrintString(hStdOut, WHITE, 10, "1)첫째 줄 4가 맞다고 가정하면 셋째 줄에도 검은원이 나왔어야 하므로 4는 x");
		PrintString(hStdOut, WHITE, 10, "같은원리로 2도 제외");
		PrintString(hStdOut, WHITE, 10, "셋째 줄 2, 4가 아니므로 셋째 줄 7 7 1은 위치만 다를뿐 맞는 숫자.");
		PrintString(hStdOut, WHITE, 10, "두 번째 줄 77 역시 맞는 숫자");
		PrintString(hStdOut, WHITE, 10, "첫째 줄 2가 맞다고 치면 넷째 줄에 하얀원이 하나 더 필요하므로 2도 x");
		PrintString(hStdOut, WHITE, 10, "첫째 줄 3이 맞다고 한다면 둘째 줄에 하얀원이 하나 더 필요하므로 3도 x");
		PrintString(hStdOut, WHITE, 10, "첫째 줄 9가 위치와 숫자 모두 정확한 확실한 수.");
		PrintString(hStdOut, WHITE, 10, "따라서 정답은 19767이다.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 7
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
		PrintString(hStdOut, WHITE, 10, "뭐든 알고나면 허무하다, 키워드는 '7단'");
		PrintString(hStdOut, WHITE, 10, "가운데 수에 7를 곱한 값의 각 자리수를 양쪽에 위치시키면 된다.");
		PrintString(hStdOut, WHITE, 10, "124 -> 7*2 == 14, \'1\'2\'4\'");
		PrintString(hStdOut, WHITE, 10, "231 -> 3*7 == 21, \'2\'3\'1\'");
		PrintString(hStdOut, WHITE, 10, "따라서 정답은 3");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 3
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
		PrintString(hStdOut, WHITE, 10, "한 획 그리기게임을 떠올리자.");
		PrintString(hStdOut, WHITE, 10, "각 알파벳 마다 필요한 횟수를 모두 합한 값이다.");
		PrintString(hStdOut, WHITE, 10, "T = 2, H = 3, U = 1");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 6
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
		PrintString(hStdOut, WHITE, 10, "어렵다 어려워");
		PrintString(hStdOut, WHITE, 10, "x번째 줄 숫자 \'x\'의 위치를 나열한 것.");
		PrintString(hStdOut, WHITE, 10, "184755209는 5번째줄이며 숫자5의 위치는 5번째, 6번째이다 ");
		PrintString(hStdOut, WHITE, 10, "따라서 56이 정답.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 56
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
		PrintString(hStdOut, WHITE, 10, "갑자기 어렵다, 거꾸로 생각하며 풀어내보자. 문제적 남자 출연진 타일러의 방법을 소개하겠다.");
		PrintString(hStdOut, WHITE, 10, "해적1과 해적2 두 명만 남은 상황부터 제시하여 거꾸로 올라가기 시작했다.");
		PrintString(hStdOut, GREEN, 10, "가정1) 해적1, 2 두 명만 남은 상황");
		PrintString(hStdOut, WHITE, 10, "조건 2에서 50%이상이 찬성하면 분배안이 통과된다고 하였으니, 이 상황에서 1명만 찬성하면 분배안을 통과하게 된다.");
		PrintString(hStdOut, WHITE, 10, "조건1에서 높은 서열이 먼저 분배안을 제안한다고 하였으니, 해적 2는 자신은 1,000냥(조건3에서 해적은 본인의 이익만 생각한다)을\n받고, 해적1은 0냥을 받게 된다.");
		PrintString(hStdOut, GREEN, 10, "\n가정2) 해적1, 2, 3 세 명이 남은 상황");
		PrintString(hStdOut, WHITE, 10, "그렇다면 세 명의 상황에서 해적3이 먼저 금액을 제시할 때, 본인을 포함하여 2명만 찬성하면 통과하므로");
		PrintString(hStdOut, WHITE, 10, "해적3은 해적1의 득표를 얻기 위ㅐ 해적1에게 1냥을 제시한다.(해적1은 1냥이라도 받는 게 이익이기 때문에 찬성");
		PrintString(hStdOut, WHITE, 10, "해적3은 해적2에게 금액을 제안해봤자 해적2의 최대 기댓감은 해적3이 죽고난 뒤, 자신이 1,000냥을 받게 되는 경우가 되므로 해적2에게는 그냥 0냥을 줘버린다.");
		PrintString(hStdOut, WHITE, 10, "따라서 해적1이 1냥, 해적2이 0냥, 해적3이 999냥을 받게 된다.");
		PrintString(hStdOut, GREEN, 10, "\n가정3) 해적1, 2, 3, 4 네 명이 남은 상황");
		PrintString(hStdOut, WHITE, 10, "네 명의 상황에서도 역시 해적4를 포함하여 2명만 찬성하면 통과된다.");
		PrintString(hStdOut, WHITE, 10, "해적3은 해적4를 죽여야 이익이므로 무조건 반대하게 된다. 따라서 해적4는 해적3에게 0냥을 분배한다.");
		PrintString(hStdOut, WHITE, 10, "여기에서 해적1에게 1냥을 제시한다면 조건4와 같이 해적 1은 다음 해적(해적3에 제안할 때를 의미)에게 똑같은 금액을 받게 되므로");
		PrintString(hStdOut, WHITE, 10, "분배안에 반대하게 되므로 그냥 0냥을 준다.");
		PrintString(hStdOut, WHITE, 10, "해적2는 해적3에게 분배권이 넘어가면 한 푼도 받지 못하는 상황이 발생하므로 1냥만 받아도 찬성하게 된다.");
		PrintString(hStdOut, WHITE, 10, "따라서 해적1이 0냥, 해적2이 1냥, 해적3이 0냥, 해적4가 999냥을 받게 된다.");
		PrintString(hStdOut, RED, 10, "결론!!!");
		PrintString(hStdOut, WHITE, 10, "그렇다면 최종적으로 해적 1, 2, 3, 4, 5 다섯 명일 때,");
		PrintString(hStdOut, WHITE, 10, "홀수 번째 해적에게 금화 1냥씩 주고 나머지는 자신이 갖는다.");
		PrintString(hStdOut, WHITE, 10, "반대로 총원이 짝수일 경우, 짝수 번째 해적에게 금화 1냥씩 분배하게 된다.");
		PrintString(hStdOut, WHITE, 10, "즉, 홀/짝의 패턴이 발생하게 된다.");
		PrintString(hStdOut, RED, 10, "따라서 해적5가 최대한 가질 수 있는 금화는 998냥이다.");


		PrintString(hStdOut, BLUE, 0, "================================================="); //정답: 219
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
		PrintString(hStdOut, WHITE, 20, "신기한 문제가 참 많다.");
		PrintString(hStdOut, WHITE, 20, "아라비아 숫자를 영문으로 표기했을 때 \'e\'가 들어가지 않은 수들의 나열이다.");
		PrintString(hStdOut, WHITE, 20, "on\'e\', two, thr\'ee\', four, fiv\'e\', six, s\'e\'ven");
		PrintString(hStdOut, WHITE, 20, "66이후부터는 모두 e가 포함되어있고 1000부터 thousand가 사용되므로 답은 1000이다.");
		PrintString(hStdOut, BLUE, 0, "=================================================");
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
		PrintString(hStdOut, WHITE, 10, "문제적남자 출연진 모두 풀어내진 못한 문제이다.");
		PrintString(hStdOut, WHITE, 10, "그런데 이 문제는 싱가프로 '초등학교' 수학대회에서 출제된 문제다.");
		PrintString(hStdOut, WHITE, 10, "만약 5/19, 6/18이면 버나드는 18, 19일이 이날 1개밖에 없기 때문에");
		PrintString(hStdOut, WHITE, 10, "처음부터 알아야 했으므로 저 두 날짜는 제외");
		PrintString(hStdOut, WHITE, 10, "그리고 앨버트는 버나드가 모르는걸 확신, 이 경우 ");
		PrintString(hStdOut, WHITE, 10, "5월이나 6월이 생일이였다면 6/18, 5/19, 즉 날짜를 아는 버나드가");
		PrintString(hStdOut, WHITE, 10, "1개밖에 없는 날인 18, 19일인걸 알고, 18, 19일이 포함된");
		PrintString(hStdOut, WHITE, 10, "5, 6월이 생일이라면, 몇월인지 아는 앨버트는 \'혹시 너는 아니?\'");
		PrintString(hStdOut, WHITE, 10, "라고 했을것. 그러나, 7, 8월이라면 모든 날짜가 2개 이상이니");
		PrintString(hStdOut, WHITE, 10, "버나드 입장에서도 알 수가 없으니 앨버트가 버나드는 모를것이라고 확신한 것");
		PrintString(hStdOut, WHITE, 10, "이렇게 해서 7, 8월이 생일인걸 아는 두 사람중 버나드는");
		PrintString(hStdOut, WHITE, 10, "14, 15, 16, 17일중 하나를 아는건데 14일이라면 여전히 알수가 없으니");
		PrintString(hStdOut, WHITE, 10, "14일 제외, 7월1개, 8월 2개인 상황에서 앨버트도 알아야 하므로 8월도 제외");
		PrintString(hStdOut, WHITE, 10, "따라서 7/16이 생일이다.");
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
	(*num)++;
}