#include<stdio.h>

int main() {


	//1. 대문자 입력 -> 소문자 소문자 입력 -> 대문자
	char alpha;
	printf("알파벳 입력:");
	scanf_s("%c", &alpha);
	get char();
	if (65 <= (int)alpha && (int)alpha <= 90) {

		printf("%c\n", (int)alpha + 32); //(char)(alpha + 32)
		
	}
	else {

		printf("%c\n", (int)alpha - 32);
	}

	//2. 하나의 정수를 입력하고 양의 홀수 양의 짝수 0 음의홀수 음의 짝수 인지 판별

	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);
	get char();
	/*if (num > 0 && num % 2 == 1) {
		printf("양의 홀수");
	}
	if (num > 0 && num % 2 == 0) {
		printf("양의 짝수");
	}
	if (num < 0 && num % 2 == 1) {
		printf("음의 홀수");
	}
	if (num < 0 && num % 2 == 0) {
		printf("음의 짝수");
	}
	if (num == 0){
		printf("0");
	}*/

	if (num > 0) {
		if (num % 2 == 0) {
			printf("양의 짝수");
		else {
			printf("양의 음수");
		}
		}
	}
	else {
		if (num % 2 == 0) {
			if (num == 0) {
				printf("0입니다.");

			else {
				printf("음의 짝수");
			}
			}
		}
		else {
			printf("양의 음수");
		}
		


	}
	return 0;
}