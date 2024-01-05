//operator: 연산자
#include<stdio.h>

int main() {

	//Ram: 변수 데이터타입
	//Input: 입력
	//Output: 출력

	//산술 연산자
	// 5 / 2 => 2
	// 5 % 2 => 1 
	//대입 연산자
	// =, +=
	//int a = 1;  1
	//a = a + 10; 11
	//a += 10;
	//a = a + 100; 111
	//a += 100;



	//1) 100이하의 양의 정수를 입력받고 10자리와 1자리를 출력하는 프로그램
	int A;
	printf("100이하의 양의 정수를 입력: ");
	scanf_s("%d", &A);
	printf("10의 자리는 %d, 1의 자리는 %d이다.\n", A / 10, A % 10);

	//2) 두 정수를 입력받고, 큰 수 출력하기
	int B, C;
	printf("첫번째 정수를 입력:");
	scanf_s("%d", &B);
	printf("두번째 정수를 입력:");
	scanf_s("%d", &C);
	//int bigger = B > C ? B : C;
	//printf('더 큰 수는 %d입니다", bigger);
	printf("더 큰 수는 %d이다.\n", B > C ? B : C);

	//3) 영어 점수 입력받고, 70이상이면 A, 아니면 F
	int D;
	printf("영어 점수를 입력:");
	scanf_s("%d", &D);
	printf("%c", D >= 70 ? 'A' : 'F');



	return 0;
}