#include<stdio.h>

int main() {

	//1. �������� �Է¹��� ���� ���� ���ϱ�
	int num1;
	int sum = 0;
	printf("���� �Է�:");
	scanf_s("%d", &num1);
	for (int i = 1; i <= num1; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	//2. �������� �Է¹��� ���� ������ ���
	int num2;
	printf("���� �Է�:");
	scanf_s("%d", &num2);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", num2, i, num2 * i);
	}
	return 0;
}