#include<stdio.h>

int main() {


	//1)�Ѻ��� ���̸� �Է¹ް�, ���簢���� ���̿� �ѷ��� ��Ÿ���� ���α׷� �ۼ��ϱ�
	double length1;
	printf("�Ѻ��� ���̸� �Է�:");
	scanf_s("%lf", &length1);
	printf("���簢���� ���̴� %.2lf�̰�, �ѷ��� %.2lf�̴�.\n", length1 * length1, 4 * length1);

	//2) �������� �Է¹ް�, ���� �ѷ��� ���� ���ϴ� ���α׷�
	double length2;
	double pi = 3.14;
	printf("�������� �Է�:");
	scanf_s("%lf", &length2);
	printf("���� �ѷ��� %.2lf�̰�, ���̴� %.2lf�̴�.", 2 * pi * length2, pi * length2 * length2);


	return 0;
}