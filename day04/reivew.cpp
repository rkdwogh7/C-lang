#include<stdio.h>

int main() {


	//1. 1000������ ������ �Է��ϸ� �� �ʷ� ����ϴ� ���α׷�
	int time;
	printf("1000������ ������ �Է�:");
	scanf_s("%d", &time);
	printf("%d�� %d��\n", time / 60, time % 60);

	//2. 10000~99999������ �Է��ϸ� �����ڸ��� ����ϴ� ���α׷�
	int num;
	printf("10000~99999 ������ �Է�:");
	scanf_s("%d", &num);
	printf("%d\n", (num % 1000)/100);
	printf("%d", (num / 100) % 10);



	return 0;
}