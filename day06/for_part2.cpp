#include<stdio.h>

int main() {

	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d %d\n", i, j);
		}
	}*/

	//1. ������ 1-9�� ���
	for (int i = 1; i < 10; i++) {
		printf("%d��\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("============\n");
	}


	//������ �Է¹ް�, *ǥ��
	
	int num1;
	printf("������ �Է�:");
	scanf_s("%d", &num1);
	for (int i = 0; i < num1; i++) { //��
		for (int i = 0; i < num1; i++) { //��
			printf("*");
		}
		printf("\n");
	}

	return 0;
}