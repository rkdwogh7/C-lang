#include<stdio.h>

int main() {

	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d %d\n", i, j);
		}
	}*/

	//1. 구구단 1-9단 출력
	for (int i = 1; i < 10; i++) {
		printf("%d단\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("============\n");
	}


	//정수를 입력받고, *표시
	
	int num1;
	printf("정수를 입력:");
	scanf_s("%d", &num1);
	for (int i = 0; i < num1; i++) { //행
		for (int i = 0; i < num1; i++) { //열
			printf("*");
		}
		printf("\n");
	}

	return 0;
}