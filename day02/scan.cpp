//scan
#include<stdio.h>

int main() {

	//int price;
	//printf("가격을 입력:");
	//scanf_s("%d", &price);	
	//printf("대입하신 가격은 %d입니다.",price);

	//int A;
	//int B;
	//printf("정수 두개를 입력: ");
	//scanf_s("%d, %d", &A, &B);
	//printf("두 수의 합은 %d입니다.", A + B);

	//int A, B;
	//printf("첫번째 정수를 입력:");
	//scanf_s("%d", &A);
	//printf("두번째 정수를 입력:");
	//scanf_s("%d", &B);
	//printf("두 수의 합 : %d", A + B);



	char first;
	printf("문자를 입력:");
	scanf_s("%c", &first);
	printf("%c%c%c\n", first,first,first);
	printf("%c %c\n", first,first);
	printf("%c%c%c", first,first, first);




	return 0;
}