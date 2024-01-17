#include<stdio.h>

int add(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}
int multiple(int x, int y) {
	return x * y;
}

void something(int x[]) {
	for (int i = 0; i < 10; i++) {printf(" %d ", x[i]); }
}

void swap(int *x,int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swapchar(char *x, char *y) {
	char temp = *x;
	*x = *y;
	*y = temp;
}

int main() {

	/*int a = add(10, 20);
	printf("%d\n", a);
	int b = minus(10, 20);
	printf("%d\n", b);
	int c = multiple(10, 20);
	printf("%d\n", c);

	//
	int d[10] = { 1,2,3,4,5 };
	int e[10] = { 4,6,3,98,9 };

	something(d);
	*/

	int a = 5;
	int b = 8;
	printf("a: %d, b: %d\n", a, b);	//5 8
	//swap(a,b)
	swap(&a, &b);
	printf("a: %d, b: %d\n", a, b); //8 5

	char c = 'a';
	char d = 'b';
	printf("c: %c, d: %c\n", c, d);
	swapchar(&c, &d);
	printf("c: %c, d: %c\n", c, d);










	return 0;
}