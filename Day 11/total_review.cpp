#include<stdio.h>

int main() {

	int x = 10;
	int* px = &x;
	int** ppx = &px;

	printf("X의 값: %d\n", x);
	printf("X의 값: %d\n", *px);
	printf("X의 값: %d\n", **ppx);

	printf("X의 주솟값: %d\n", &x);
	printf("X의 주솟값: %d\n", px);
	printf("X의 주솟값: %d\n", ppx);

	printf("px의 값: %d\n", &x);
	printf("px의 값: %d\n", px);
	printf("px의 값: %d\n", *ppx);

	printf("ppx의 포인터값: %d\n", *ppx);
	printf("ppx의 더블 포인터 값: %d\n", **ppx);
	




	return 0;
}