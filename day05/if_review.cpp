#include<stdio.h>

int main() {


	//1. �빮�� �Է� -> �ҹ��� �ҹ��� �Է� -> �빮��
	char alpha;
	printf("���ĺ� �Է�:");
	scanf_s("%c", &alpha);
	get char();
	if (65 <= (int)alpha && (int)alpha <= 90) {

		printf("%c\n", (int)alpha + 32); //(char)(alpha + 32)
		
	}
	else {

		printf("%c\n", (int)alpha - 32);
	}

	//2. �ϳ��� ������ �Է��ϰ� ���� Ȧ�� ���� ¦�� 0 ����Ȧ�� ���� ¦�� ���� �Ǻ�

	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);
	get char();
	/*if (num > 0 && num % 2 == 1) {
		printf("���� Ȧ��");
	}
	if (num > 0 && num % 2 == 0) {
		printf("���� ¦��");
	}
	if (num < 0 && num % 2 == 1) {
		printf("���� Ȧ��");
	}
	if (num < 0 && num % 2 == 0) {
		printf("���� ¦��");
	}
	if (num == 0){
		printf("0");
	}*/

	if (num > 0) {
		if (num % 2 == 0) {
			printf("���� ¦��");
		else {
			printf("���� ����");
		}
		}
	}
	else {
		if (num % 2 == 0) {
			if (num == 0) {
				printf("0�Դϴ�.");

			else {
				printf("���� ¦��");
			}
			}
		}
		else {
			printf("���� ����");
		}
		


	}
	return 0;
}