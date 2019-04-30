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
		PrintString(hStdOut, WHITE, 20, "[���������� �ø���]�� �����ϼ̽��ϴ�.");
		PrintString(hStdOut, GREEN, 20, "������ tvN ���α׷� \"������ ����\"���� �����Խ��ϴ�. ");
		PrintString(hStdOut, GREEN, 20, "ESCŰ�� �����ش�����(Ȥ�� ��) ���� ����� �������ϴ�.");
		PrintString(hStdOut, WHITE, 20, "BGM - Trontemoller - Miss You");
		PrintString(hStdOut, GREEN, 20, "����Ű�� ������ ������ ���۵˴ϴ�.");
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
		PrintString(hStdOut, WHITE, 20, "[���������� �ø���]\n1. ����ǥ�� �� ���ڴ�??");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, GREEN, 100, "���̵� ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "ȫ�� �ʵ��б� ���⹮����� �Ѵ�. ");
		PrintString(hStdOut, WHITE, 20, "���� ����ǥ�� �� ���ڴ� �����ϱ�??");
		PrintString(hStdOut, WHITE, 20, "16 - 06 - 68 - 88 - ? - 98");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n'); // ����: 87
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[���������� �ø���]\n2. ���� ���ĺ���??");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, GREEN, 100, "���̵� ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "���� ���ĺ� ���ڵ��� �������� �ִ�");
		PrintString(hStdOut, WHITE, 20, "�� ������ ���� ���ڿ��� �����ϱ�??");
		PrintString(hStdOut, WHITE, 20, "B C D E I K O X");
		PrintString(hStdOut, RED, 20, "���� �� ���ڸ� �Է��Ͻÿ�.\n");
		PrintString(hStdOut, BLUE, 0, "================================================="); // ����: 1
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer_; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[���������� �ø���]\n3. ������ �� ���ĺ���?");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, SKYBLUE, 100, "���̵� �ڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "N W H O I ()");
		PrintString(hStdOut, RED, 20, "������ �� ���ĺ��� �����ΰ�?(���ĺ� �ϳ��� �Է��Ͻʽÿ�)");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer_; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[���������� �ø���]\n4. ���ھ߱�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, SKYBLUE, 100, "���̵� �ڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "�� ���� �´� ������ ������ �ǹ��ϰ�,");
		PrintString(hStdOut, WHITE, 20, "���� ���� ���ڿ� ��ġ�� ��� �´� ���� �ǹ��Ѵ�.");
		PrintString(hStdOut, YELLOW, 0, "3 9 2 2 4\t��");
		PrintString(hStdOut, YELLOW, 0, "7 7 4 6 3\t�� �� ��");
		PrintString(hStdOut, YELLOW, 0, "7 7 1 2 4\t�� �� ��");
		PrintString(hStdOut, YELLOW, 0, "2 9 1 8 1\t�� ��");
		PrintString(hStdOut, YELLOW, 0, "? ? ? ? ?\t�� �� �� �� ��");
		PrintString(hStdOut, YELLOW, 0, "���� �Է� ");
		PrintString(hStdOut, RED, 20, "����ǥ�� �� ���ڴ�? (���� ���� �Է�)");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 19767
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[���������� �ø���]\n5. ����ǥ�� �� ���ڴ�?");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 100, "���̵� �ڡڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 20, "124 - 479 - 462 - 586 - 248 - 2?1 - 355");
		PrintString(hStdOut, RED, 20, "����ǥ�� �� ���ڴ�?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //���� 3
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[���������� �ø���]\n6. ���� ���̾");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, PINK, 100, "���̵� �ڡڡڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "����� ���� ���̾���� ���ϸ��� �� �� ����");
		PrintString(hStdOut, WHITE, 20, "���ڰ� ���� �ִ�. ����ǥ�� �� ����?");
		PrintString(hStdOut, WHITE, 20, "M O N = 3");
		PrintString(hStdOut, WHITE, 20, "T U E = 5");
		PrintString(hStdOut, WHITE, 20, "W E D = 4");
		PrintString(hStdOut, WHITE, 20, "T H U = ?");
		PrintString(hStdOut, RED, 20, "?�� �� ���ڴ� �����ϱ�?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 89
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[���������� �ø���]\n7. ���ֶ��� ���� ��Ʈ");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, PINK, 100, "���̵� �ڡڡڡڡڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "403937139 = 7");
		PrintString(hStdOut, WHITE, 20, "112407852 = 39");
		PrintString(hStdOut, WHITE, 20, "305137136 = 158");
		PrintString(hStdOut, WHITE, 20, "790921078 = 0");
		PrintString(hStdOut, WHITE, 20, "184755209 = ?");
		PrintString(hStdOut, RED, 20, "����ǥ�� �� ���ڴ�?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 56
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[���������� �ø���]\n8. ���� ��ȭ");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, RED, 100, "���̵� �ڡڡڡڡڡڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "5���� ������ �߰��� ��ȭ 1,000�� �� ��Ģ�� �°�");
		PrintString(hStdOut, WHITE, 20, "�ִ��� ���� ��ȭ�� ���� ��, �� ����? (����� ���� 5)");
		PrintString(hStdOut, YELLOW, 20, "1. ���ڰ� �������� ������ ����, ���� ������ �й�� ���� �� ���� ��ǥ");
		PrintString(hStdOut, YELLOW, 20, "2. 50% �̻� ����(���� ����)�ϸ� �й�� ���, �̴� �� �����ڴ� �װ�, ���� ������ �ڰ� �й���� �ٽ� ����");
		PrintString(hStdOut, YELLOW, 20, "3. ������ ������ ���� X, ������ ���͸��� ����, ǥ�� ���");
		PrintString(hStdOut, YELLOW, 20, "4. ���� �������κ��� ���� ���� ��ȭ�� ���� �� �ִٸ� �й�ȿ� �ݴ�");
		PrintString(hStdOut, RED, 20, "����� ��ȭ�� �ִ� �� ���� ���� �� ������?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 998
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[���������� �ø���]\n9. ����ǥ�� �� ����?");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, RED, 100, "���̵� �ڡڡڡڡڡڡڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "�ں��˰� �������� \'�� ������, ���ֶ� �ܼ�Ʈ\'Ƽ����");
		PrintString(hStdOut, WHITE, 20, "�̸��Ϸ� ���� ���� �� ������ �� �ִ�.");
		PrintString(hStdOut, RED, 20, "����ǥ�� �� ����?");
		PrintString(hStdOut, YELLOW, 20, "2  4  6  30 32 34 36 40 42 44\n46 50 52 54 56 60 62 64 66 ?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 1000
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[���������� �ø���]\n10. �θ��� ������?");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, RED, 100, "���̵� �ڡڡڡڡڡڡڡڡڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "����Ʈ�� ������� �θ��� ������ �˰� �;� �Ѵ�.");
		PrintString(hStdOut, WHITE, 20, "�θ��� �� ģ�� ���� 10���� ��¥�� ���.");
		PrintString(hStdOut, YELLOW, 20, "<5�� 15��> , <5�� 16��>, <5�� 19��>");
		PrintString(hStdOut, YELLOW, 20, "<6�� 17��> ,             <6�� 18��>");
		PrintString(hStdOut, YELLOW, 20, "<7�� 14��> ,             <7�� 16��>");
		PrintString(hStdOut, YELLOW, 20, "<8�� 14��> , <8�� 17��>, <8�� 15��>");
		PrintString(hStdOut, WHITE, 20, "-----------------------------------------------");
		PrintString(hStdOut, WHITE, 20, "���� ��ȭ ������ ����.");
		PrintString(hStdOut, YELLOW, 20, "����Ʈ: �θ��� ������ �������� ���� �𸣰ھ�.");
		PrintString(hStdOut, YELLOW, 20, "        �ʵ� �θ��� ������ �𸥴ٴ� �� �˾�~");
		PrintString(hStdOut, YELLOW, 20, "\n������: ���� �θ��� ������ ��������\n        ó������ �������� ������ �˾�");
		PrintString(hStdOut, YELLOW, 20, "\n����Ʈ: ���� ���� �θ��� ������ �������� �˾Ҿ�");
		PrintString(hStdOut, WHITE, 20, "\n�θ��� ����Ʈ���״� ��(��)�� �˷��ְ�");
		PrintString(hStdOut, WHITE, 20, "       ����Ʈ���״� ��(��)�� �˷����.\n");
		PrintString(hStdOut, RED, 20, "�θ��� ������ �����ϱ�?");
		PrintString(hStdOut, RED, 20, "(����� �����Ͽ� ���� ���� ������� �Է�)");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 4
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer >> answer2; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "1�� ���� Ǯ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "�����ϱ� �̸���. �� ������ '�ʵ��б�' �����̴�.\n");
		PrintString(hStdOut, WHITE, 10, "���ڸ� ���Ʒ��� ������ ����\n");
		PrintString(hStdOut, WHITE, 10, "86 \'87\' 88 89 90 91 ���� �� �� �ִ�. \n");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 87
		cout << "��� Ǫ�÷��� ����Ű�� �Է��Ͻÿ�."; 
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
		PrintString(hStdOut, WHITE, 20, "2�� ���� Ǯ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "���ĺ��� �� �Ʒ��� ��Ī�̴�.");
		PrintString(hStdOut, WHITE, 10, "���Ʒ� ��Ī�� ���ĺ��߿� ���� ���ĺ��� \'H\'�̴�.");
		PrintString(hStdOut, WHITE, 10, "������ Ǯ ���ϴ�.. ������...");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: H
		cout << "��� Ǫ�÷��� ����Ű�� �Է��Ͻÿ�.";
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
		PrintString(hStdOut, WHITE, 20, "3�� ���� Ǯ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "�� �� �� �� ���� �� ��");
		PrintString(hStdOut, WHITE, 10, "���ĺ��� 2��° ���ڸ� ������� ���� �� ���̴�.");
		PrintString(hStdOut, WHITE, 10, "O\'N\'E, T\'W\'O, T\'H\'REE, F\'O\'UR F\'I\'VE S\'I\'X");
		PrintString(hStdOut, WHITE, 10, "���� I �Ǵ� i�� �����̴�.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: I or i
		cout << "��� Ǫ�÷��� ����Ű�� �Է��Ͻÿ�.";
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
		PrintString(hStdOut, WHITE, 20, "4�� ���� Ǯ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "����������� ����� ����, ���ھ߱�");
		PrintString(hStdOut, WHITE, 10, "������ 19767�̴�.");
		PrintString(hStdOut, WHITE, 10, "1)ù° �� 4�� �´ٰ� �����ϸ� ��° �ٿ��� �������� ���Ծ�� �ϹǷ� 4�� x");
		PrintString(hStdOut, WHITE, 10, "���������� 2�� ����");
		PrintString(hStdOut, WHITE, 10, "��° �� 2, 4�� �ƴϹǷ� ��° �� 7 7 1�� ��ġ�� �ٸ��� �´� ����.");
		PrintString(hStdOut, WHITE, 10, "�� ��° �� 77 ���� �´� ����");
		PrintString(hStdOut, WHITE, 10, "ù° �� 2�� �´ٰ� ġ�� ��° �ٿ� �Ͼ���� �ϳ� �� �ʿ��ϹǷ� 2�� x");
		PrintString(hStdOut, WHITE, 10, "ù° �� 3�� �´ٰ� �Ѵٸ� ��° �ٿ� �Ͼ���� �ϳ� �� �ʿ��ϹǷ� 3�� x");
		PrintString(hStdOut, WHITE, 10, "ù° �� 9�� ��ġ�� ���� ��� ��Ȯ�� Ȯ���� ��.");
		PrintString(hStdOut, WHITE, 10, "���� ������ 19767�̴�.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 7
		cout << "��� Ǫ�÷��� ����Ű�� �Է��Ͻÿ�.";
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
		PrintString(hStdOut, WHITE, 20, "5�� ���� Ǯ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "���� �˰��� �㹫�ϴ�, Ű����� '7��'");
		PrintString(hStdOut, WHITE, 10, "��� ���� 7�� ���� ���� �� �ڸ����� ���ʿ� ��ġ��Ű�� �ȴ�.");
		PrintString(hStdOut, WHITE, 10, "124 -> 7*2 == 14, \'1\'2\'4\'");
		PrintString(hStdOut, WHITE, 10, "231 -> 3*7 == 21, \'2\'3\'1\'");
		PrintString(hStdOut, WHITE, 10, "���� ������ 3");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 3
		cout << "��� Ǫ�÷��� ����Ű�� �Է��Ͻÿ�.";
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
		PrintString(hStdOut, WHITE, 20, "6�� ���� Ǯ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "�� ȹ �׸�������� ���ø���.");
		PrintString(hStdOut, WHITE, 10, "�� ���ĺ� ���� �ʿ��� Ƚ���� ��� ���� ���̴�.");
		PrintString(hStdOut, WHITE, 10, "T = 2, H = 3, U = 1");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 6
		cout << "��� Ǫ�÷��� ����Ű�� �Է��Ͻÿ�.";
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
		PrintString(hStdOut, WHITE, 20, "7�� ���� Ǯ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "��ƴ� �����");
		PrintString(hStdOut, WHITE, 10, "x��° �� ���� \'x\'�� ��ġ�� ������ ��.");
		PrintString(hStdOut, WHITE, 10, "184755209�� 5��°���̸� ����5�� ��ġ�� 5��°, 6��°�̴� ");
		PrintString(hStdOut, WHITE, 10, "���� 56�� ����.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 56
		cout << "��� Ǫ�÷��� ����Ű�� �Է��Ͻÿ�.";
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
		PrintString(hStdOut, WHITE, 20, "8�� ���� Ǯ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "���ڱ� ��ƴ�, �Ųٷ� �����ϸ� Ǯ�����. ������ ���� �⿬�� Ÿ�Ϸ��� ����� �Ұ��ϰڴ�.");
		PrintString(hStdOut, WHITE, 10, "����1�� ����2 �� �� ���� ��Ȳ���� �����Ͽ� �Ųٷ� �ö󰡱� �����ߴ�.");
		PrintString(hStdOut, GREEN, 10, "����1) ����1, 2 �� �� ���� ��Ȳ");
		PrintString(hStdOut, WHITE, 10, "���� 2���� 50%�̻��� �����ϸ� �й���� ����ȴٰ� �Ͽ�����, �� ��Ȳ���� 1�� �����ϸ� �й���� ����ϰ� �ȴ�.");
		PrintString(hStdOut, WHITE, 10, "����1���� ���� ������ ���� �й���� �����Ѵٰ� �Ͽ�����, ���� 2�� �ڽ��� 1,000��(����3���� ������ ������ ���͸� �����Ѵ�)��\n�ް�, ����1�� 0���� �ް� �ȴ�.");
		PrintString(hStdOut, GREEN, 10, "\n����2) ����1, 2, 3 �� ���� ���� ��Ȳ");
		PrintString(hStdOut, WHITE, 10, "�׷��ٸ� �� ���� ��Ȳ���� ����3�� ���� �ݾ��� ������ ��, ������ �����Ͽ� 2�� �����ϸ� ����ϹǷ�");
		PrintString(hStdOut, WHITE, 10, "����3�� ����1�� ��ǥ�� ��� ���� ����1���� 1���� �����Ѵ�.(����1�� 1���̶� �޴� �� �����̱� ������ ����");
		PrintString(hStdOut, WHITE, 10, "����3�� ����2���� �ݾ��� �����غ��� ����2�� �ִ� ����� ����3�� �װ� ��, �ڽ��� 1,000���� �ް� �Ǵ� ��찡 �ǹǷ� ����2���Դ� �׳� 0���� �������.");
		PrintString(hStdOut, WHITE, 10, "���� ����1�� 1��, ����2�� 0��, ����3�� 999���� �ް� �ȴ�.");
		PrintString(hStdOut, GREEN, 10, "\n����3) ����1, 2, 3, 4 �� ���� ���� ��Ȳ");
		PrintString(hStdOut, WHITE, 10, "�� ���� ��Ȳ������ ���� ����4�� �����Ͽ� 2�� �����ϸ� ����ȴ�.");
		PrintString(hStdOut, WHITE, 10, "����3�� ����4�� �׿��� �����̹Ƿ� ������ �ݴ��ϰ� �ȴ�. ���� ����4�� ����3���� 0���� �й��Ѵ�.");
		PrintString(hStdOut, WHITE, 10, "���⿡�� ����1���� 1���� �����Ѵٸ� ����4�� ���� ���� 1�� ���� ����(����3�� ������ ���� �ǹ�)���� �Ȱ��� �ݾ��� �ް� �ǹǷ�");
		PrintString(hStdOut, WHITE, 10, "�й�ȿ� �ݴ��ϰ� �ǹǷ� �׳� 0���� �ش�.");
		PrintString(hStdOut, WHITE, 10, "����2�� ����3���� �й���� �Ѿ�� �� Ǭ�� ���� ���ϴ� ��Ȳ�� �߻��ϹǷ� 1�ɸ� �޾Ƶ� �����ϰ� �ȴ�.");
		PrintString(hStdOut, WHITE, 10, "���� ����1�� 0��, ����2�� 1��, ����3�� 0��, ����4�� 999���� �ް� �ȴ�.");
		PrintString(hStdOut, RED, 10, "���!!!");
		PrintString(hStdOut, WHITE, 10, "�׷��ٸ� ���������� ���� 1, 2, 3, 4, 5 �ټ� ���� ��,");
		PrintString(hStdOut, WHITE, 10, "Ȧ�� ��° �������� ��ȭ 1�ɾ� �ְ� �������� �ڽ��� ���´�.");
		PrintString(hStdOut, WHITE, 10, "�ݴ�� �ѿ��� ¦���� ���, ¦�� ��° �������� ��ȭ 1�ɾ� �й��ϰ� �ȴ�.");
		PrintString(hStdOut, WHITE, 10, "��, Ȧ/¦�� ������ �߻��ϰ� �ȴ�.");
		PrintString(hStdOut, RED, 10, "���� ����5�� �ִ��� ���� �� �ִ� ��ȭ�� 998���̴�.");


		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 219
		cout << "��� Ǫ�÷��� ����Ű�� �Է��Ͻÿ�.";
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
		PrintString(hStdOut, WHITE, 20, "9�� ���� Ǯ��");
		PrintString(hStdOut, WHITE, 20, "�ű��� ������ �� ����.");
		PrintString(hStdOut, WHITE, 20, "�ƶ��� ���ڸ� �������� ǥ������ �� \'e\'�� ���� ���� ������ �����̴�.");
		PrintString(hStdOut, WHITE, 20, "on\'e\', two, thr\'ee\', four, fiv\'e\', six, s\'e\'ven");
		PrintString(hStdOut, WHITE, 20, "66���ĺ��ʹ� ��� e�� ���ԵǾ��ְ� 1000���� thousand�� ���ǹǷ� ���� 1000�̴�.");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		cout << "��� Ǫ�÷��� ����Ű�� �Է��Ͻÿ�.";
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
		PrintString(hStdOut, WHITE, 20, "10�� ���� Ǯ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "���������� �⿬�� ��� Ǯ��� ���� �����̴�.");
		PrintString(hStdOut, WHITE, 10, "�׷��� �� ������ �̰����� '�ʵ��б�' ���д�ȸ���� ������ ������.");
		PrintString(hStdOut, WHITE, 10, "���� 5/19, 6/18�̸� ������� 18, 19���� �̳� 1���ۿ� ���� ������");
		PrintString(hStdOut, WHITE, 10, "ó������ �˾ƾ� �����Ƿ� �� �� ��¥�� ����");
		PrintString(hStdOut, WHITE, 10, "�׸��� �ٹ�Ʈ�� �����尡 �𸣴°� Ȯ��, �� ��� ");
		PrintString(hStdOut, WHITE, 10, "5���̳� 6���� �����̿��ٸ� 6/18, 5/19, �� ��¥�� �ƴ� �����尡");
		PrintString(hStdOut, WHITE, 10, "1���ۿ� ���� ���� 18, 19���ΰ� �˰�, 18, 19���� ���Ե�");
		PrintString(hStdOut, WHITE, 10, "5, 6���� �����̶��, ������� �ƴ� �ٹ�Ʈ�� \'Ȥ�� �ʴ� �ƴ�?\'");
		PrintString(hStdOut, WHITE, 10, "��� ������. �׷���, 7, 8���̶�� ��� ��¥�� 2�� �̻��̴�");
		PrintString(hStdOut, WHITE, 10, "������ ���忡���� �� ���� ������ �ٹ�Ʈ�� ������� �𸦰��̶�� Ȯ���� ��");
		PrintString(hStdOut, WHITE, 10, "�̷��� �ؼ� 7, 8���� �����ΰ� �ƴ� �� ����� �������");
		PrintString(hStdOut, WHITE, 10, "14, 15, 16, 17���� �ϳ��� �ƴ°ǵ� 14���̶�� ������ �˼��� ������");
		PrintString(hStdOut, WHITE, 10, "14�� ����, 7��1��, 8�� 2���� ��Ȳ���� �ٹ�Ʈ�� �˾ƾ� �ϹǷ� 8���� ����");
		PrintString(hStdOut, WHITE, 10, "���� 7/16�� �����̴�.");
		PrintString(hStdOut, RED, 10, "���� ������ �ϳ��� �Ⱦ��� �Դٸ� ���� 0.1%�� ���� �������ְ�");
		PrintString(hStdOut, RED, 10, "���� ������ ���� �Դٸ� ����� ���⿡ �ڼ��� �����ϴ�.");
		PrintString(hStdOut, RED, 10, "���� �����̽��ϴ�! ��� ���������� ������ Ǯ��̽��ϴ�.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 211
		cout << "��� Ǫ�÷��� ����Ű�� �Է��Ͻÿ�.";
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