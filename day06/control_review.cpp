#include<stdio.h>

int main() {


	//1. 정수를 입력받고, 현재 온도 상태 표시

	int num1;
	printf("온도를 입력:");
	scanf_s("%d", &num1);
	if (num1 < 0) {
		printf("추우므로 실내활동 권장\n");
	} else if (0 < num1 && num1 < 40) {
		printf("쾌적하므로 실외활동 권장\n");
	} else {
		printf("더우므로 실내활동 권장\n");
	}


	//2. 두 개의 양의 정수를 입력 받아 제곱관계를 출력하는 프로그램

	int num2, num3;
	printf("첫번째 양의 정수 입력:");
	scanf_s("%d", &num2);
	getchar();
	printf("두번째 양의 정수 입력:");
	scanf_s("%d", &num3);
	getchar();
	if (num2 == num3 * num3) {
		printf("%d * %d = %d\n", num3, num3, num2);
	} else if (num3 == num2 * num2) {
		printf("%d * %d = %d\n", num2, num2, num3);
	} else {
		printf("none\n");
	}

	//3. 5개의 정수를 입력받아, 양수인 수들의 합을 구하는 프로그램

	int num4, num5, num6, num7, num8;
	printf("첫번째 정수 입력:");
	scanf_s("%d", &num4);
	getchar();
	printf("두번째 정수 입력:");
	scanf_s("%d", &num5);
	getchar();
	printf("세번째 정수 입력:");
	scanf_s("%d", &num6);
	getchar();
	printf("네번째 정수 입력:");
	scanf_s("%d", &num7);
	getchar();
	printf("다섯번째 정수 입력:");
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

	//4. 특정 범위 정수 판별

	return 0;
}