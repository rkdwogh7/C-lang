#include<stdio.h>


int main() {

	//1. char coffee[3][20]을 선언 후 유저에게 3개의 문자열을 입력 받고,
	// 포인터 배열을 사용해서 각각의 커피 메뉴를 출력

	/*char coffee[3][20];
	for (int i = 0; i < 3; i++) { 
		printf("커피 3가지 입력:");
		scanf("%s", coffee[i]);
	}
	char(*pc)[20]; // 20글자의 포인터 배열

	for (int i = 0; i < 3; i++) {
		pc = &coffee[i];
		printf("%s\n", *(pc));
	}*/

	//2. int a =10, int b = 20을 선언한후 더블포인터를 선언후 처음에는 a를 가리키는 코드 작성하고
	//출력 후 b로 가리키는 코드 작성하고 b를 출력하는 

	int a = 10;
	int b = 20;
	int* pt;
	int** ppt;
	//ppt -> a
	pt = &a;
	ppt = &pt;
	printf("%d\n", **ppt);
	//ppt -> b
	pt = &b;
	printf("%d", **ppt);
	return 0;
}