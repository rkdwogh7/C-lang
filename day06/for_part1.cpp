#include<stdio.h>

int main() {

	//1. 유저에게 입력받은 수의 총합 구하기
	int num1;
	int sum = 0;
	printf("정수 입력:");
	scanf_s("%d", &num1);
	for (int i = 1; i <= num1; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	//2. 유저에게 입력받은 수로 구구단 출력
	int num2;
	printf("정수 입력:");
	scanf_s("%d", &num2);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", num2, i, num2 * i);
	}
	return 0;
}