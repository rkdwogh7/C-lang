#include<stdio.h>
//���
//1. ���ǹ� - if,switch
//2. �ݺ��� - �ڵ带 n�� �ݺ��� - for
int main() {

	/*for (int i = 0; i < 10; i++){
		printf("%d\n", i);
	}*/

//1-100 �� Ȧ���� ���
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 1) {
			printf("%d\n", i);
		}
	}



	return 0;
}