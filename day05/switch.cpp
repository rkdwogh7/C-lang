#include<stdio.h>

//
int main() {

	/*char alpha = 'b';
	switch (alpha) {
		case'a':
			printf("a�� ����");
			break;	//break �ʼ�!!
		case'b':
			printf("b�� ����");
			break;
		default:
			printf("���� ���ĺ� ����");
			break;
	}*/

	//1. �������� 1-4���� �Է¹ް� �� ��Ÿ����

	int num;
	printf("1-4�� �Է�:");
	scanf_s("%d", &num);
	switch (num) {
		case 1:
			printf("1���Դϴ�.\n");
			break;
		case 2:
			printf("2���Դϴ�.\n");
			break;
		case 3:
			printf("3���Դϴ�.\n");
			break;
		case 4:
			printf("4���Դϴ�.\n");
			break;
	}

	int num1, num2;
	char op;
	printf("����1�� �Է�:");
	scanf_s("%d", &num1);
	getchar();
	printf("����2�� �Է�:");
	scanf_s("%d", &num2);
	getchar();
	printf("������ �Է�:");
	scanf_s("%c", &op);
	getchar();
	switch (op) {
		case '+':
			printf("�� ���� ���� %d�Դϴ�.", num1 + num2); // ("%d %c %d = %d", num1, op, num2, num1+num2)
			break;
		case '-':
			printf("�� ���� ���� %d�Դϴ�.", num1 - num2);
			break;
		default:
			printf("�� ���� ���� %d�Դϴ�.", num1 * num2);
			break;
	}







	return 0;
}