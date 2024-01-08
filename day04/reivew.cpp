#include<stdio.h>

int main() {


	//1. 1000이하의 정수를 입력하면 분 초로 출력하는 프로그램
	int time;
	printf("1000이하의 정수를 입력:");
	scanf_s("%d", &time);
	printf("%d분 %d초\n", time / 60, time % 60);

	//2. 10000~99999정수를 입력하면 백의자리를 출력하는 프로그램
	int num;
	printf("10000~99999 정수를 입력:");
	scanf_s("%d", &num);
	printf("%d\n", (num % 1000)/100);
	printf("%d", (num / 100) % 10);



	return 0;
}