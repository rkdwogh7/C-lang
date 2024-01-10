#include<stdio.h>

int main() {

	int a = 0;
	while (a < 5) {
		printf("메가스터디\n");
		a++;
	}

	int num;
	while (1) {
		printf("숫자를 입력:");
		scanf_s("%d", *num);

		if (num == 1234) break;
	}




	return 0;
}