#include<stdio.h>

int main() {

	// control statement(제어문)
	// [코드실행 순서를 조작]
	
	// 1. conditional statement (조건문)
	// 어떤 코드를 실행할지 결정
	// -1) if / else if / else
	// -2) switch

	/*정수를 입력받고 정수가 20보다 크고 30보다 작았을때 축하합니다 출력
	int num;
	printf("정수 입력:");
	scanf_s("%d", &num);
	if (num > 20 && num < 30) {

		printf("축하합니다.\n");
	}
	printf("ㅅㄱ");*/

	/*if ~else
	int num;
	printf("정수 입력:");
	scanf_s("%d", &num);
	if (num > 0) {
		printf("양수입니다.");
	}
	else {
		printf("0 또는 음수입니다.");
	}*/

	//알파벳 입력받고 대문자면 대문자입니다 소문자면 소문자입니다 출력

	/*char text;
	printf("알파벳 입력:");
	scanf_s("%c", &text);
	
	if (65 <= (int)text && (int)text <= 90) {
		printf("대문자입니다.");
	}
	else {
		printf("소문자입니다.");
	}*/

	//정수 입력 후 홀짝 판별기

	int num;
	printf("정수 입력:");
	scanf_s("%d", &num);
	if (num % 2 == 0) {
		printf("짝수입니다.\n");
	}
	else {
		printf("홀수입니다.\n");  //else 는 조건 안붙음
	}


	int num2 = 9;
	// 중첩(nested) 조건문
	if (num2 > 0) {
		if (num2 % 2 == 0) {
			printf("양의짝수");
		}
		else {
			printf("양의홀수");
		}
	}


	return 0;

}