#include<stdio.h>
//제어문
//1. 조건문 - if,switch
//2. 반복문 - 코드를 n번 반복함 - for
int main() {

	/*for (int i = 0; i < 10; i++){
		printf("%d\n", i);
	}*/

//1-100 중 홀수만 출력
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 1) {
			printf("%d\n", i);
		}
	}



	return 0;
}