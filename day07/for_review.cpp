#include<stdio.h>

int main() {


	//1. �������� �Է¹��� ������ ����� 0~100 ������ ���� ���Ͻÿ�
	
	int num;
	int sum = 0;
	int i = 1;
	printf("���� �Է�:");
	scanf_s("%d", &num);
	while (num * i <= 100) {
		sum += num * i;
		i++;
	}
	printf("%d\n", sum);
	/*
	for (int i = 0; i <= 100; i++) {
		if (i % num == 0) sum += i;
	}
	printf("sum:%d\n", sum);
	*/
	
	//2. �� ������ �Է¹޾� 0~1000�� �� ������ ����� ����ϱ�

	int num1, num2;
	int l = 1;
	printf("ù��° ���� �Է�:");
	scanf_s("%d", &num1);
	getchar();
	printf("�ι�° ���� �Է�:");
	scanf_s("%d", &num2);
	getchar();
	if (num1 % num2 == 0) {
		while (num1 * l <= 1000) {
			printf("%d ", num1 * l);
			l++;
		}
	}
	else if (num2 % num1 == 0) {
		while (num2 * l <= 1000) {
			printf("%d ", num2 * l);
			l++;
		}
	}
	else {
		while (num1 * num2 * l <= 1000) {
			printf("%d ", num1 * num2 * l);
			l++;
		}
	}
	/*
	for ( int i = 0; i <= 1000; i++){
		if ( i % a == 0 && i % b == 0) {
		printf("%d\n", i);
		}
	}
	
	*/
	
	// for(�����ڰ� ���� �˶�) vs while(�������� ���� �ñ�)
	// if(optional) vs switch(mandantory)

	//3. �������� ���� 0�� ������ ������ ���� ������ �Է¹޾� 0�� ���� �� ���ݱ��� ������ ������ �� ��Ÿ����















	/*int sum = 0;

	while (1) {

		int num;
		printf("���� �Է�(0 ����):");
		scanf_s("%d", &num);
		if (num == 0) break;
		sum += num;
	}
	printf("%d", sum);*/



	return 0;
}