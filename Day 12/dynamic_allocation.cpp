//dynamic_allocation

#include<stdio.h>
#include<stdlib.h>		//동적할당 필수
#include<string.h>		//문자 조지기 필수

int main() {

	int num;
	printf("얼만큼 생성 원함? \n");
	scanf("%d", &num);

	//malloc 생성
	int* ptr;
	ptr = (int*)malloc(sizeof(int) * num);
	ptr[0] = 1;
	ptr[1] = 1;
	ptr[2] = 1;
	ptr[3] = 1;




	return 0;
}