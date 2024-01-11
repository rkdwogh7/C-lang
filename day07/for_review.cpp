#include<stdio.h>

int main() {


	//1. 유저에게 입력받은 정수의 배수의 0~100 까지의 합을 구하시오
	
	int num;
	int sum = 0;
	int i = 1;
	printf("정수 입력:");
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
	
	//2. 두 정수를 입력받아 0~1000의 두 정수의 공배수 출력하기

	int num1, num2;
	int l = 1;
	printf("첫번째 정수 입력:");
	scanf_s("%d", &num1);
	getchar();
	printf("두번째 정수 입력:");
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
	
	// for(개발자가 끝을 알때) vs while(유저에게 끝을 맡김)
	// if(optional) vs switch(mandantory)

	//3. 유저에게 숫자 0을 누르기 전까지 여러 정수를 입력받아 0을 누른 후 지금까지 눌렀던 정수의 합 나타내기















	/*int sum = 0;

	while (1) {

		int num;
		printf("정수 입력(0 종료):");
		scanf_s("%d", &num);
		if (num == 0) break;
		sum += num;
	}
	printf("%d", sum);*/



	return 0;
}