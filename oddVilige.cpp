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
		PrintString(hStdOut, WHITE, 20, "[����ư���� �ø���]�� �����ϼ̽��ϴ�.");
		PrintString(hStdOut, WHITE, 20, "������ ���ٵ� ���� ");
		PrintString(hStdOut, GREEN, 20, "<����ư������ �̻��Ѹ���>, ");
		PrintString(hStdOut, GREEN, 20, "<����ư������ �Ǹ��� ����> ���� �����Խ��ϴ�.");
		PrintString(hStdOut, GREEN, 20, "ESCŰ�� �����ش�����(Ȥ�� ��) ���� ����� �������ϴ�.");
		PrintString(hStdOut, WHITE, 20, "BGM - ����ư������ �Ǹ��ǻ��� - puzzle");
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
		PrintString(hStdOut, WHITE, 20, "[����ư���� �ø���]\n1. �ӼӸ� �����ϱ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, GREEN, 100, "���̵� ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "8���� �𿩼� �ӼӸ��� �����ϴ�");
		PrintString(hStdOut, WHITE, 20, "���̸� �Ϸ��� �Ѵ�. 1���� ��������");
		PrintString(hStdOut, WHITE, 20, "������ 7���� �ӼӸ��� �����ؾ� �ϴµ�,");
		PrintString(hStdOut, WHITE, 20, "�� ���� 1���Ը� ������ �� �ְ�, ");
		PrintString(hStdOut, WHITE, 20, "1���� �����ϴ� ���� 1���� �ɸ���.");
		PrintString(hStdOut, RED, 20, "��� ������� �ӼӸ��� ���޵Ƿ��� �ִ� �� ���� �ɸ���?\n");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');// ����: 3
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[����ư���� �ø���]\n2. �þ �����?");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, GREEN, 100, "���̵� ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "������ ���ķ��� ������ ������ �ռ��ϴ�. ");
		PrintString(hStdOut, WHITE, 20, "����� �� �޿� �� ���� ������ ������");
		PrintString(hStdOut, WHITE, 20, "�ѹ��� 12���� ���� �㸦 ���´ٰ� �Ѵ�. ");
		PrintString(hStdOut, WHITE, 20, "�� �¾ ������ ���� 2���� ���� ������ ���´�.");
		PrintString(hStdOut, WHITE, 20, "���� �� �¾ ���㸦 1���� Ű��� �����ߴٸ�");
		PrintString(hStdOut, RED, 20, "10���� �ڿ��� ����ü �� ������ �Ǿ� ������?\n");
		PrintString(hStdOut, BLUE, 0, "================================================="); // ����: 1
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[����ư���� �ø���]\n3. ħ���� ��������");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, SKYBLUE, 100, "���̵� �ڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "20�� �ĸ� ���� �ɰ� �� �������� ");
		PrintString(hStdOut, WHITE, 20, "15���� ����� Ÿ�� �ִ�.");
		PrintString(hStdOut, WHITE, 20, "���� 5���� ��Ʈ�� 1ô ����Ͽ� ");
		PrintString(hStdOut, WHITE, 20, "����� ������ �ǳ� �Ϸ��� �ϳ�");
		PrintString(hStdOut, WHITE, 20, "�ٴٿ��� ���� �� �����Ƿ� ");
		PrintString(hStdOut, WHITE, 20, "����� �ļ� �̵��ϴ� ���� �Ұ��� �ϴ�.\n");
		PrintString(hStdOut, RED, 20, "�������� ���� �պ��ϴ� ���� 9���� �ɸ��ٰ� �ϸ�");
		PrintString(hStdOut, RED, 20, "���� �� ���� �츱 �� ������?");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[����ư���� �ø���]\n4. ������ �ʴ� �Ҳ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, SKYBLUE, 100, "���̵� �ڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "���� ���� ���� 10���� �־���. ");
		PrintString(hStdOut, WHITE, 20, "�׷��� �ٶ��� �Ҿ 2���� ������ ���Ҵ�.");
		PrintString(hStdOut, WHITE, 20, "�׸��� ����Ŀ� ���� �� 1���� �����־���.");
		PrintString(hStdOut, WHITE, 20, "�׷κ��� �ٶ��� ���� �ʵ����ϰ�");
		PrintString(hStdOut, WHITE, 20, "�� �� 1���� ������ �ʾҴٸ�");
		PrintString(hStdOut, RED, 20, "������ ��� �־��� ���ʴ� �� ���ϱ�?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 3
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[����ư���� �ø���]\n5. �������� ��å");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 100, "���̵� �ڡڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "�������� ������ ��å�� ���� ����");
		PrintString(hStdOut, WHITE, 20, "�ƺ����� 10�� ���� ����ߴ�.");
		PrintString(hStdOut, WHITE, 20, "�ƺ��� ����԰� ���ÿ� �������� �ƺ��� ����");
		PrintString(hStdOut, WHITE, 20, "�޷Ȱ�, �ƺ��� ��ġ�� �������� �ٽ� ������ �ٲ�");
		PrintString(hStdOut, WHITE, 20, "�� ������ �޷����ٰ�, ���� ��ġ���� �ٽ� �ƺ���");
		PrintString(hStdOut, WHITE, 20, "��ġ���� �޷ȴ�. �������� �̷������� �ƺ��� �� ���̸�");
		PrintString(hStdOut, WHITE, 20, "�պ����� �̵����� ��, ������ �̵� �ӵ��� ��������");
		PrintString(hStdOut, WHITE, 20, "�ʼ� 5m, �ƺ��� �ʼ� 2m, ���� �ʼ� 1m���");
		PrintString(hStdOut, WHITE, 20, "�ϸ�, �ƺ��� ���� �������� �� ����");
		PrintString(hStdOut, RED, 20, "�������� �� m�� �޷�����?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //���� 10
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[����ư���� �ø���]\n6. ���� ����Ŭ");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, PINK, 100, "���̵� �ڡڡڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "g\n");
		PrintString(hStdOut, YELLOW, 20, "��4 -> 16 -> 37 -> 58 -> ?? -> 145 -> 42 -> 20 -> 4");
		PrintString(hStdOut, YELLOW, 20, "    -> 16 -> 37 -> 58 -> ?? -> 145 -> 42 -> 20 -> 4");
		PrintString(hStdOut, YELLOW, 20, "  -> 16 -> 37 -> ���� �ݺ� -----------------------��\n");
		PrintString(hStdOut, RED, 20, "??�� �� ���ڴ� �����ϱ�?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 89
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[����ư���� �ø���]\n7. ������ �й�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, PINK, 100, "���̵� �ڡڡڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "�� ���� �������� �����ϰ� �ִ� ���� �־���.");
		PrintString(hStdOut, WHITE, 20, "������ ������ ABC�� ���� �縸ŭ ���� �ؼ�");
		PrintString(hStdOut, WHITE, 20, "�ܵ� �ɱ�� �ߴµ� C�� �λ��� �Դ� �ٶ���");
		PrintString(hStdOut, WHITE, 20, "�ᱹ A�� 5��, B�� 4���� ���ؼ� �ܵ� �ɴ� ���� ��� ���ƴ�.\n");
		PrintString(hStdOut, WHITE, 20, "C�� �� ������� ������ ��ȭ 9���� �����߰�, ");
		PrintString(hStdOut, WHITE, 20, "�� ����� ���� �� �� ��ŭ ����������.");
		PrintString(hStdOut, RED, 20, "���� �� ������ ��������?");
		PrintString(hStdOut, WHITE, 20, "(A�� B�� ������� ����� �����Ͽ� �Է��Ͻÿ�.)");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 6 3
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer >> answer_; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[����ư���� �ø���]\n8. ���� �����");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, RED, 100, "���̵� �ڡڡڡڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, YELLOW, 20, "�������� �����̶�� ġ��. ������ �����̾��ٸ�");
		PrintString(hStdOut, YELLOW, 20, "  ������ ������̾�. �׷� �̹����� ������ ");
		PrintString(hStdOut, YELLOW, 20, "  ������̶�� ġ��. �������� ������� �ƴϾ��ٸ�");
		PrintString(hStdOut, YELLOW, 20, "  ������ ������̰�, ������̾��ٸ� ������ �����̾�.��\n");
		PrintString(hStdOut, RED, 20, "�׷� 1���� 365�Ϸ� ����� �� �� ȸ���� ������� �� ��ĥ�ϱ�?");
		PrintString(hStdOut, WHITE, 20, "(�Ͽ���, �������� �������� �ʱ�� �Ѵ�.)");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 219
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[����ư���� �ø���]\n9. 500�� ����");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, RED, 100, "���̵� �ڡڡڡڡڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "������� ���谡���� �̷��� ���ߴ�.\n");
		PrintString(hStdOut, YELLOW, 20, "���� �������� 500���� ���ְ� �ִ�. ");
		PrintString(hStdOut, YELLOW, 20, "  �ű⼭ Ư�� ����ŭ ���ָ� �������ʶ�.");
		PrintString(hStdOut, YELLOW, 20, "  �� ���� 2���� 7������ � ���� ������ �ݵ��");
		PrintString(hStdOut, YELLOW, 20, "  1�� ���� �ָ��� ��. ���ǿ��� �°� ���ָ� ������ ����,");
		PrintString(hStdOut, YELLOW, 20, "  �� ���ָ� ��� �״뿡�� �ְڳ��.��\n");
		PrintString(hStdOut, WHITE, 20, "������ ���谡�� �Ǽ���, 4�� �������� ���� ���ǿ�");
		PrintString(hStdOut, WHITE, 20, "���� �ʴ� ���� �������� ���Ҵ�.");
		PrintString(hStdOut, RED, 20, "���� �� ���� ����������?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 211
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "[����ư���� �ø���]\n10. ī�� ���");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, RED, 100, "���̵� �ڡڡڡڡڡڡ�");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 20, "�� ���� �𿩼� ���ư��� ��⸦ �ϴ� ������");
		PrintString(hStdOut, WHITE, 20, "������� ī�� ��ȸ�� ������.");
		PrintString(hStdOut, WHITE, 20, "�������� �Ҵϴ� �� �� ��⸦ �� �� �߰���");
		PrintString(hStdOut, WHITE, 20, "���� ���ܼ� ����� �ϰ� ������ �Ǿ���.");
		PrintString(hStdOut, WHITE, 20, "�׳� ġ���� ���� �� 59���.");
		PrintString(hStdOut, RED, 20, "�Ҵϴ� �� ��⸦ ��ġ�� ���������?");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 4
		PrintString(hStdOut, YELLOW, 0, "���� �Է� "); cin >> answer; cin.ignore(1, '\n');
		printf("��");
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
		PrintString(hStdOut, WHITE, 20, "1�� ���� Ǯ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "����~ ����!\n");
		PrintString(hStdOut, WHITE, 10, "���� ����� ���� �� �����ϸ� 3�� ���� ������.\n");
		PrintString(hStdOut, WHITE, 10, "���� ó�� �ӼӸ��� �� ����� 3����, \n");
		PrintString(hStdOut, WHITE, 10, "���� ó�� �ӼӸ��� ���� ����� 2���� �����ϸ� �ȴ�.\n");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 211
		cout << "��� Ǫ�÷��� ����Ű�� �Է��Ͻÿ�.";
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
		PrintString(hStdOut, WHITE, 20, "2�� ���� Ǯ��");
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "1...?");
		PrintString(hStdOut, WHITE, 10, "����� ȥ�� ������ ���� ���� ����.");
		PrintString(hStdOut, YELLOW, 10, "ȭ�������� ���㿡�� ����������. ");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 211
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
		PrintString(hStdOut, WHITE, 10, "����Ʈ�� �κ��� �ƴϾ�!");
		PrintString(hStdOut, WHITE, 10, "����Ʈ�� Ÿ�� ���µ����� ��� �� ���� �ݵ��");
		PrintString(hStdOut, WHITE, 10, "�ʿ��ϴ�. 20�е��� 3���� �¿� �� �ִµ�");
		PrintString(hStdOut, WHITE, 10, "������ ���� �� 12���� �¿� �� �����Ƿ�");
		PrintString(hStdOut, WHITE, 10, "������ ���� 13���� ��� ���� �� �ִ�.");
		PrintString(hStdOut, WHITE, 10, "���� 2���� �ƽ��Ե�...");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 211
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
		PrintString(hStdOut, WHITE, 10, "���ʰ� ���� �ʰ� ��� ź�ٸ� ���а��� ū ����");
		PrintString(hStdOut, WHITE, 10, "\'����\'���ʴ� ���� ���� ������ ������ �����ϴ�");
		PrintString(hStdOut, WHITE, 10, "���� �Ȳ��� ���ʴ� ��� ��Ƽ� �������� �����̴�.\n");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 211
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
		PrintString(hStdOut, WHITE, 10, "�ƺ��� ���� �������� ������ ��������");
		PrintString(hStdOut, WHITE, 10, "��� ������ �ӵ��� �޸��� �־���.");
		PrintString(hStdOut, WHITE, 10, "10m���� �ƺ��� ���� �Ÿ��� ����");
		PrintString(hStdOut, WHITE, 10, "1m�� �پ��Ƿ�, ������������");
		PrintString(hStdOut, WHITE, 10, "10�ʰ� �ɸ���. �������� �ʼ� 5m��");
		PrintString(hStdOut, WHITE, 10, "�޸��Ƿ�, ������ �翬�� 50m.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 211
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
		PrintString(hStdOut, WHITE, 10, "�� �ڸ��� �� �ڸ��� ���ͼ� ���� �� ��");
		PrintString(hStdOut, WHITE, 10, "���ϸ� �ȴ�.");
		PrintString(hStdOut, WHITE, 10, "58 -> 5^2 + 8^2 == 89");
		PrintString(hStdOut, WHITE, 10, "���� �˸� �㹫�� ��.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 211
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
		PrintString(hStdOut, WHITE, 10, "A�� 6��, B�� 3���� ���� �ȴ�.");
		PrintString(hStdOut, WHITE, 10, "���� 5���� 4���� ���´ٰ� ����ϱ�");
		PrintString(hStdOut, WHITE, 10, "������, ������ ���� ������ ���� �̴�");
		PrintString(hStdOut, WHITE, 10, "������ �ƴ��� �� �� �ִ�.");
		PrintString(hStdOut, WHITE, 10, "A, B�� �ڽŵ��� ������ 3�� ġ��");
		PrintString(hStdOut, WHITE, 10, "���ؾ� �ϹǷ�, �� �κ��� ��꿡��");
		PrintString(hStdOut, WHITE, 10, "���� �Ѵ�. ��, C�� ���� 3����");
		PrintString(hStdOut, WHITE, 10, "2�ϰ� 1�Ϸ� ���� ���� ���� �ȴ�.");
		PrintString(hStdOut, WHITE, 10, "��, ��ȭ�� 2�� 1�� ����ϸ� �ȴ�.");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 211
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
		PrintString(hStdOut, WHITE, 10, "������ �����ؼ� �򰥸� ��, ������ ����");
		PrintString(hStdOut, WHITE, 10, "[3�� ���� ���, 2�� ���� ����]�� ");
		PrintString(hStdOut, WHITE, 10, "�ݺ��Ǵ� ��Ȳ�̴�. ��, 5�� �� 3����");
		PrintString(hStdOut, WHITE, 10, "����ϴ� ���̹Ƿ�, ������� 365����");
		PrintString(hStdOut, WHITE, 10, "5���� 3, �� 219���̴�.");

		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 211
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
		PrintString(hStdOut, BLUE, 0, "=================================================");
		PrintString(hStdOut, WHITE, 10, "���̵��� �޻���ߴ�.");
		PrintString(hStdOut, WHITE, 10, "�����簡 ���� ���� 2, 3, 4, 5, 6, 7��");
		PrintString(hStdOut, WHITE, 10, "������ �������� ���� 1�� ���� ��.");
		PrintString(hStdOut, WHITE, 10, "�� ���� �ּ� ������� 420�� 1�� ���� 421�̴�.");
		PrintString(hStdOut, WHITE, 10, "���谡�� ������ �� ���� 4�� ���� ����");
		PrintString(hStdOut, WHITE, 10, "���ǿ� ���� �ʴ´ٰ� �����Ƿ�, 2, 3, 5, 6, 7��");
		PrintString(hStdOut, WHITE, 10, "������ �������� ���� 1�� ���ϸ� �ȴ�.");
		PrintString(hStdOut, WHITE, 10, "500�� �Ѵ� ���� ������ �ʿ䰡 ����..");
		PrintString(hStdOut, BLUE, 0, "================================================="); //����: 211
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
		PrintString(hStdOut, WHITE, 10, "���̵��� ���� �޻�� �ߴ�.");
		PrintString(hStdOut, WHITE, 10, "�켱 �� ��� ���� ��(1/2) * n * (n-1)�� �̹Ƿ�");
		PrintString(hStdOut, WHITE, 10, "11���� �����ߴٸ� 55���, 12���� �����ߴٸ� 66���");
		PrintString(hStdOut, WHITE, 10, "���� ���̴�. 59��Ⱑ ġ�������Ƿ�");
		PrintString(hStdOut, WHITE, 10, "���� �ο����� 12��.");
		PrintString(hStdOut, WHITE, 10, "66���� 59�� ���� �Ҵϰ� �����");
		PrintString(hStdOut, WHITE, 10, "������ �� �� �ְ� 12���� ��ġ�� ������������");
		PrintString(hStdOut, WHITE, 10, "1���� �ٸ� 11��� �ܷ�� �ǹǷ�,");
		PrintString(hStdOut, WHITE, 10, "11 - 7 == 4 ��Ⱑ ����");
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
}