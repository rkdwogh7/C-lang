// var_quiz
#include<stdio.h>

int main() {

	//1. 태어난 년도를 입력받으면, 현재 만나이 출력하기
	//2. 세 개의 숫자를 입력 받고 평균 구하기
	//3. 섭씨 온도를 입력 받아 화씨 온도로 변환하기
	//4. 한 변의 길이를 입력받아 정사각형의 넓이 구하기
	//5. 반지름의 길이를 입력받아 원의 넓이와 둘레 구하기


	//1.
	int year1;
	int year2 = 2023;
	printf("태어난 년도를 입력하시오:");
	scanf_s("%d", &year1);
	printf("만나이는 %d입니다.\n", year2 - year1);

	//2.
	int num1, num2, num3;
	printf("첫번째 숫자를 입력:");
	scanf_s("%d", &num1);
	printf("두번째 숫자를 입력:");
	scanf_s("%d", &num2);
	printf("세번째 숫자를 입력:");
	scanf_s("%d", &num3);
	printf("세 수의 평균은: %.2lf\n", (double)(num1 + num2 + num3) / 3); //실수가 나올수도 있으므로 형변환

	//3.
	double celsius;
	printf("섭씨 온도를 입력:");
	scanf_s("%lf", &celsius);
	printf("화씨 온도는 %lf입니다.", celsius * 5.9 + 32);


	
	return 0;
}