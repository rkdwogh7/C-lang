// var_quiz
#include<stdio.h>

int main() {

	//1. �¾ �⵵�� �Է¹�����, ���� ������ ����ϱ�
	//2. �� ���� ���ڸ� �Է� �ް� ��� ���ϱ�
	//3. ���� �µ��� �Է� �޾� ȭ�� �µ��� ��ȯ�ϱ�
	//4. �� ���� ���̸� �Է¹޾� ���簢���� ���� ���ϱ�
	//5. �������� ���̸� �Է¹޾� ���� ���̿� �ѷ� ���ϱ�


	//1.
	int year1;
	int year2 = 2023;
	printf("�¾ �⵵�� �Է��Ͻÿ�:");
	scanf_s("%d", &year1);
	printf("�����̴� %d�Դϴ�.\n", year2 - year1);

	//2.
	int num1, num2, num3;
	printf("ù��° ���ڸ� �Է�:");
	scanf_s("%d", &num1);
	printf("�ι�° ���ڸ� �Է�:");
	scanf_s("%d", &num2);
	printf("����° ���ڸ� �Է�:");
	scanf_s("%d", &num3);
	printf("�� ���� �����: %.2lf\n", (double)(num1 + num2 + num3) / 3); //�Ǽ��� ���ü��� �����Ƿ� ����ȯ

	//3.
	double celsius;
	printf("���� �µ��� �Է�:");
	scanf_s("%lf", &celsius);
	printf("ȭ�� �µ��� %lf�Դϴ�.", celsius * 5.9 + 32);


	
	return 0;
}