#include<stdio.h>

int main() {

	int x = 10;
	int* px = &x;
	int** ppx = &px;

	printf("X�� ��: %d\n", x);
	printf("X�� ��: %d\n", *px);
	printf("X�� ��: %d\n", **ppx);

	printf("X�� �ּڰ�: %d\n", &x);
	printf("X�� �ּڰ�: %d\n", px);
	printf("X�� �ּڰ�: %d\n", ppx);

	printf("px�� ��: %d\n", &x);
	printf("px�� ��: %d\n", px);
	printf("px�� ��: %d\n", *ppx);

	printf("ppx�� �����Ͱ�: %d\n", *ppx);
	printf("ppx�� ���� ������ ��: %d\n", **ppx);
	




	return 0;
}