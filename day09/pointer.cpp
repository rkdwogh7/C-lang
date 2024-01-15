#include<stdio.h>

int main() {

	/*int a = 10;
	& 주소 연산자
	printf("%d", &a);*/

	// *포인터 연산자 = 주소값을 주면 거기에 담긴 값을 보여줄게
	int a = 10;
	int* pa = &a;

	printf("*pa : %d\n", *pa);
	printf("a : %d\n", a);
	printf("pa : %d\n", pa);
	printf("&a : %d\n", &a);

	*pa = 50;
	printf("a: %d\n", a);


	return 0;
}