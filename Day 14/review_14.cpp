#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Coffee {
	char name[50];
	int price;
}Coffee;

int main() {

	//1. ������ �迭�� n�� ��ŭ �����Ҵ� �ϰ�, n���� ���� ū ���� ���
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);
	int* large;
	large = (int*) malloc(num * sizeof(int));

	for (int i = 0; i < num; i++) {
		printf("%d��°�� ���� �Է�:", i);
		scanf("%d", &large[i]);
	}
	int max = large[0];
	for (int i = 0; i < num; i++) {
		if (max < large[i]) {
			max = large[i];
			}
	}
	printf("���� ū ���� %d�Դϴ�.\n", max);

	free(large);
	
	//2. Coffee��[name, price]�迭�� n�� ��ŭ ���� �Ҵ� �ϰ�, ��� Ŀ���� ���ݰ� �̸� ���
	int num1;
	printf("���� �Է�:");
	scanf("%d", &num1);

	Coffee* ptr;
	ptr = (Coffee*) malloc(num * sizeof(Coffee));

		for (int i = 0; i < num1; i++) {
			char newName[50];
			printf("%d��° Ŀ�� �̸� �Է�:",i);
			scanf("%s", newName);
			int newPrice;
			printf("%d��° Ŀ�� ���� �Է�:", i);
			scanf("%d", &newPrice);

			strcpy(ptr[i].name, newName);
			ptr[i].price = newPrice;

		}

		for(int i = 0;i < num1; i++) {

			printf("%d��°�� Ŀ�� �̸�: %s , ����: %d \n", i, ptr[i].name, ptr[i].price);
		}
	
	return 0;
}