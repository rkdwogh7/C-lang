//operator: ������
#include<stdio.h>

int main() {

	//Ram: ���� ������Ÿ��
	//Input: �Է�
	//Output: ���

	//��� ������
	// 5 / 2 => 2
	// 5 % 2 => 1 
	//���� ������
	// =, +=
	//int a = 1;  1
	//a = a + 10; 11
	//a += 10;
	//a = a + 100; 111
	//a += 100;



	//1) 100������ ���� ������ �Է¹ް� 10�ڸ��� 1�ڸ��� ����ϴ� ���α׷�
	int A;
	printf("100������ ���� ������ �Է�: ");
	scanf_s("%d", &A);
	printf("10�� �ڸ��� %d, 1�� �ڸ��� %d�̴�.\n", A / 10, A % 10);

	//2) �� ������ �Է¹ް�, ū �� ����ϱ�
	int B, C;
	printf("ù��° ������ �Է�:");
	scanf_s("%d", &B);
	printf("�ι�° ������ �Է�:");
	scanf_s("%d", &C);
	//int bigger = B > C ? B : C;
	//printf('�� ū ���� %d�Դϴ�", bigger);
	printf("�� ū ���� %d�̴�.\n", B > C ? B : C);

	//3) ���� ���� �Է¹ް�, 70�̻��̸� A, �ƴϸ� F
	int D;
	printf("���� ������ �Է�:");
	scanf_s("%d", &D);
	printf("%c", D >= 70 ? 'A' : 'F');



	return 0;
}