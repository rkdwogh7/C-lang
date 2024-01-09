#include<stdio.h>

//
int main() {

	/*char alpha = 'b';
	switch (alpha) {
		case'a':
			printf("a를 선택");
			break;	//break 필수!!
		case'b':
			printf("b를 선택");
			break;
		default:
			printf("선택 알파벳 없음");
			break;
	}*/

	//1. 유저에게 1-4까지 입력받고 월 나타내기

	int num;
	printf("1-4를 입력:");
	scanf_s("%d", &num);
	switch (num) {
		case 1:
			printf("1월입니다.\n");
			break;
		case 2:
			printf("2월입니다.\n");
			break;
		case 3:
			printf("3월입니다.\n");
			break;
		case 4:
			printf("4월입니다.\n");
			break;
	}

	int num1, num2;
	char op;
	printf("정수1을 입력:");
	scanf_s("%d", &num1);
	getchar();
	printf("정수2를 입력:");
	scanf_s("%d", &num2);
	getchar();
	printf("연산자 입력:");
	scanf_s("%c", &op);
	getchar();
	switch (op) {
		case '+':
			printf("두 수의 합은 %d입니다.", num1 + num2); // ("%d %c %d = %d", num1, op, num2, num1+num2)
			break;
		case '-':
			printf("두 수의 차은 %d입니다.", num1 - num2);
			break;
		default:
			printf("두 수의 곱은 %d입니다.", num1 * num2);
			break;
	}







	return 0;
}