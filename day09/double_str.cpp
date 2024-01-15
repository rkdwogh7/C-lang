#include<stdio.h>

int main() {

	/*char coffee[3][10] = {
		"americano",
		"latte",
		"vanila"
	};
	for (int i = 0; i < 3; i++) {
		printf("%s\n", coffee[i]);
	}*/

	char coffee[3][100];
	for (int i = 0; i < 3; i++) {
		printf("커피 3종류 입력: ");
		scanf("%s", &coffee[i]);
		getchar();
	}
	for (int j = 0; j < 3; j++) {
		printf("%s\n", coffee[j]);
	}





	return 0;
}