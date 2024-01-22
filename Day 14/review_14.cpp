#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Coffee {
	char name[50];
	int price;
}Coffee;

int main() {

	//1. 정수형 배열을 n개 만큼 동적할당 하고, n에서 가장 큰 숫자 출력
	int num;
	printf("정수 입력:");
	scanf("%d", &num);
	int* large;
	large = (int*) malloc(num * sizeof(int));

	for (int i = 0; i < num; i++) {
		printf("%d번째의 정수 입력:", i);
		scanf("%d", &large[i]);
	}
	int max = large[0];
	for (int i = 0; i < num; i++) {
		if (max < large[i]) {
			max = large[i];
			}
	}
	printf("가장 큰 수는 %d입니다.\n", max);

	free(large);
	
	//2. Coffee형[name, price]배열을 n개 만큼 동적 할당 하고, 모든 커피의 가격과 이름 출력
	int num1;
	printf("정수 입력:");
	scanf("%d", &num1);

	Coffee* ptr;
	ptr = (Coffee*) malloc(num * sizeof(Coffee));

		for (int i = 0; i < num1; i++) {
			char newName[50];
			printf("%d번째 커피 이름 입력:",i);
			scanf("%s", newName);
			int newPrice;
			printf("%d번째 커피 가격 입력:", i);
			scanf("%d", &newPrice);

			strcpy(ptr[i].name, newName);
			ptr[i].price = newPrice;

		}

		for(int i = 0;i < num1; i++) {

			printf("%d번째의 커피 이름: %s , 가격: %d \n", i, ptr[i].name, ptr[i].price);
		}
	
	return 0;
}