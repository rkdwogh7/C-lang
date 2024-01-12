#include<stdio.h>

int main() {

	//1. 하나의 양의 정수를 n을 받아 1부터 n까지의 홀수의 합을 출력하는 프로그램
	/*int num;
	int sum = 0;
	printf("정수 입력:");
	scanf_s("%d", &num);
	getchar();
	for (int i = 0; i <= num; i++){
		if (i % 2 != 0) {
			sum += i;
		}
	}
	printf("%d\n", sum);*/

	//2. 0-100사이의 정수를 반복해서 입력받아, 합계평균개수를 출력
	//100을 넘으면 무시, 종료조건 0또는 음수, 실수는 소숫점둘째자리
	int num1;
	int count = 0;
	int sum1 = 0;
	int average = 0;
	while (1) {
		printf("정수 입력:");
		scanf_s("%d", &num1);
		if (num1 < 100 && num1 > 0) {
			sum1 += num1;
			count++;
		}
		if (num1 <= 0) break;
	}
	
	printf("총합: %d, 평균: %.2lf 개수: %d", sum1, (double) sum1 / count, count);

	//3. 사칙연산받는 프로그램
	
	/*int codeNumber;
	while (1) {
		printf("1.더하기\n2.빼기\n,3.곱하기\n4.나누기\n5.종료\n번호입력:");
		scanf_s("%d", &codeNumber);

		switch (codeNumber) {
			case 1:
				int a, b;
				printf("첫 번째 정수 입력:");
				scanf_s("%d", &a);
				printf("두 번째 정수 입력:");
				scanf_s("%d", &b);
				printf("%d + %d = %d", a, b, a + b);
				break;


		
			case 5:
				printf("프로그램 종료");
				return 0;
			default:
				printf("숫자를 잘못 입력 하였습니다. 다시 입력:");
				break;
		}

	}*/
	




	return 0;
}