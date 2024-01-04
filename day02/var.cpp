//var
#include<stdio.h>

int main() {
	//연산[cpu], 기억[ram]
	// 변수[기억 시켜주는 곳]

	//int today = 4;          정수 int								%d
	//float stock = 2124.6;   실수 float								%f
	//double height = 170.5;  실수 double (범위가 더 크다)			%lf
	//char coffee_size = 'L'; 문자 char 알파벳 or 특수문자 가능		%c
	//printf("오늘 날짜는 %d일입니다.", today);


	int today = 4;
	float nasdaq = 14592.21;				//숫자에 ,는 사용불가   %.2f --> 소수점 2자리까지 표시
	double bitcoin = 56189766.78;
	char coffee_size = 'M';

	printf("오늘은 %d일입니다. 나스닥 주식은 %.2f이고, 비트코인 가격은 %lf이고, 오늘 커피 사이즈 주문은 %c사이즈 입니다.",today,nasdaq,bitcoin,coffee_size);





	return 0;
}