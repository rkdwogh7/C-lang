#include<stdio.h>
#include<string.h>

//Ÿ�� ����(���� ������) 
//typedef int Umm; int�� Umm��� ��

typedef struct Coffee{
	char name[50];
	int price;
	int shots;
} Coffee;

void raiseCoffeePrice(Coffee* coffee, int amount) {
	coffee->price += amount
}

int main() {

	Coffee menu[3] = {
		{"americano", 6500, 2},
		{"signature", 9000, 1},
		{"today", 5000, 2}
	};
	for (int i = 0; i < 3; i++) { //3 -> sizeof(menu) / sizeof(menu[0])
		printf("%s %d %d\n", menu[i].name, menu[i].price, menu[i].shots);
	}

	//���� õ�� �λ�
	for (int i = 0; i < 3; i++) {
		menu[i].price += 1000;
		printf("%s %d %d\n", menu[i].name, menu[i].price, menu[i].shots);
	}

	//raiseCoffeePrice(Coffee�ּڰ�, int price)
	raiseCoffeePrice(&menu[0], 1000);
	raiseCoffeePrice(&menu[1], 1000);
	raiseCoffeePrice(&menu[2], 1000);
	for (int i = 0; i < 3; i++) { 
		printf("%s %d %d\n", menu[i].name, menu[i].price, menu[i].shots);
	}

	printf("%d %d", sizeof(menu), sizeof(menu[0]));

	return 0;
}