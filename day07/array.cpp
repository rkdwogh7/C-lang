#include<stdio.h>

int main() {

	//array [�迭]
	/*
	1. �迭 ���� �� �ʱ�ȭ
		int score[5] = { 100,30,40,50,20 };
	2. �迭 ���� �� �ʱ�ȭ
		int weight[] = { 100,200,300,400,500,600 };
	3. �迭 ����
		int height[10];
	4. �迭�� �ε����� ���� 0!
		height[0] = 188;
	*/

	//�� �л��� 5���϶�, �������� 5�� �Է¹ް�, �� ��� ���ϴ� ���α׷�

	int score[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("�������� �Է�:");
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	/*
	for (int i = 0; i < 5; i++) {
		printf("�������� �Է�:");
		scanf_s("%d", &score[i]);
	}
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d��° �л� ���� : %d", i+1, score[i]);
		sum += score[i];
	}
	*/
	printf("���: %.2lf\n", double(sum / 5));

	//�� ��� 5���� Ű

	/*double height[5];
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("Ű�� �Է�:");
		scanf_s("%lf", height[i]);
		getchar();
		sum += height[i];
	}
	printf("��� Ű: %.2lf", double(sum / 5));*/


	//1��° char�迭 �����
	char it[] = { 'm','e','g','a','s','t','u','d','y','!','\0'};
	char starbuks[20] = {'l','a','t','t','e','\0'};
	char megacoffee[20];

	//printf("%d\n", sizeof(int)); //4byte
	//for (int i = 0; i < sizeof(it); i++) {
	//	printf("%c", it[i]);
	//}

	megacoffee[0] = 'l';
	megacoffee[1] = 'a';
	megacoffee[2] = 't';
	megacoffee[3] = 't';
	megacoffee[4] = 'e';
	megacoffee[5] = '\0';	// null ������ ��� ������ ��/ 20�� �˾Ƽ� ä��

	//%c�� ���� �迭 ���
	for (int i = 0; megacoffee[i] != '\0'; i++) {

		printf("%c\n", megacoffee[i]);
	}

	//%s�� ���� �迭 ���
	printf("%s\n", it);

	

	return 0;
}