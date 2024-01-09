#include<stdio.h>

int main() {

	/*int eng = 80;

	if (eng > 90) {
		printf("A");
	}
	else if(eng > 80){
		printf("B");
	}
	else if (eng > 70) {
		printf("C");
	}
	else {
		printf("F");
	}*/

	//1. 각도를 입력해서 90이하면 예각, 90이면 직각, 90~180 둔각 180 평각

	int num;
	printf("각도를 입력:");
	scanf_s("%d", &num);

	if (0 < num && num < 90) {
		printf("예각입니다.");
	}
	else if (num == 90) {
		printf("직각입니다.");
	}
	else if (90 < num && num < 180) {
		printf("둔각입니다.");
	}
	else {
		printf("평각입니다.");
	}

	return 0;
}