#include<stdio.h>

int main() {


	//1)한변의 길이를 입력받고, 정사각형의 넓이와 둘레를 나타내는 프로그램 작성하기
	double length1;
	printf("한변의 길이를 입력:");
	scanf_s("%lf", &length1);
	printf("정사각형의 넓이는 %.2lf이고, 둘레는 %.2lf이다.\n", length1 * length1, 4 * length1);

	//2) 반지름을 입력받고, 원의 둘레와 넓이 구하는 프로그램
	double length2;
	double pi = 3.14;
	printf("반지름을 입력:");
	scanf_s("%lf", &length2);
	printf("원의 둘레는 %.2lf이고, 넓이는 %.2lf이다.", 2 * pi * length2, pi * length2 * length2);


	return 0;
}