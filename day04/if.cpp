#include<stdio.h>

int main() {

	// control statement(���)
	// [�ڵ���� ������ ����]
	
	// 1. conditional statement (���ǹ�)
	// � �ڵ带 �������� ����
	// -1) if / else if / else
	// -2) switch

	/*������ �Է¹ް� ������ 20���� ũ�� 30���� �۾����� �����մϴ� ���
	int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);
	if (num > 20 && num < 30) {

		printf("�����մϴ�.\n");
	}
	printf("����");*/

	/*if ~else
	int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);
	if (num > 0) {
		printf("����Դϴ�.");
	}
	else {
		printf("0 �Ǵ� �����Դϴ�.");
	}*/

	//���ĺ� �Է¹ް� �빮�ڸ� �빮���Դϴ� �ҹ��ڸ� �ҹ����Դϴ� ���

	/*char text;
	printf("���ĺ� �Է�:");
	scanf_s("%c", &text);
	
	if (65 <= (int)text && (int)text <= 90) {
		printf("�빮���Դϴ�.");
	}
	else {
		printf("�ҹ����Դϴ�.");
	}*/

	//���� �Է� �� Ȧ¦ �Ǻ���

	int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);
	if (num % 2 == 0) {
		printf("¦���Դϴ�.\n");
	}
	else {
		printf("Ȧ���Դϴ�.\n");  //else �� ���� �Ⱥ���
	}


	int num2 = 9;
	// ��ø(nested) ���ǹ�
	if (num2 > 0) {
		if (num2 % 2 == 0) {
			printf("����¦��");
		}
		else {
			printf("����Ȧ��");
		}
	}


	return 0;

}