#include<stdio.h>

int main() {


	//1. ������ �Է¹ް�, ���� �µ� ���� ǥ��

	int num1;
	printf("�µ��� �Է�:");
	scanf_s("%d", &num1);
	if (num1 < 0) {
		printf("�߿�Ƿ� �ǳ�Ȱ�� ����\n");
	} else if (0 < num1 && num1 < 40) {
		printf("�����ϹǷ� �ǿ�Ȱ�� ����\n");
	} else {
		printf("����Ƿ� �ǳ�Ȱ�� ����\n");
	}


	//2. �� ���� ���� ������ �Է� �޾� �������踦 ����ϴ� ���α׷�

	int num2, num3;
	printf("ù��° ���� ���� �Է�:");
	scanf_s("%d", &num2);
	getchar();
	printf("�ι�° ���� ���� �Է�:");
	scanf_s("%d", &num3);
	getchar();
	if (num2 == num3 * num3) {
		printf("%d * %d = %d\n", num3, num3, num2);
	} else if (num3 == num2 * num2) {
		printf("%d * %d = %d\n", num2, num2, num3);
	} else {
		printf("none\n");
	}

	//3. 5���� ������ �Է¹޾�, ����� ������ ���� ���ϴ� ���α׷�

	int num4, num5, num6, num7, num8;
	printf("ù��° ���� �Է�:");
	scanf_s("%d", &num4);
	getchar();
	printf("�ι�° ���� �Է�:");
	scanf_s("%d", &num5);
	getchar();
	printf("����° ���� �Է�:");
	scanf_s("%d", &num6);
	getchar();
	printf("�׹�° ���� �Է�:");
	scanf_s("%d", &num7);
	getchar();
	printf("�ټ���° ���� �Է�:");
	scanf_s("%d", &num8);
	getchar();

	int sum = 0;

	if (num4 > 0){
		sum += num4;
	}
	if (num5 > 0) {
		sum += num5;
	}
	if (num6 > 0) {
		sum += num6;
	}
	if (num7 > 0) {
		sum += num7;
	}
	if (num8 > 0) {
		sum += num8;
	}
	printf("%d", sum);

	//4. Ư�� ���� ���� �Ǻ�

	return 0;
}