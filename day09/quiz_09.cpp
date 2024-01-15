#include <stdio.h>

int main() {

	//1. 0입력전까지 소문자 알파벳들을 입력하고 0을 누른후 대문자로 바꾸기
	/*char alpha;
	char str;
	while (1) {
		printf("알파벳 입력:");
		scanf("%c", &alpha);
		str = alpha;
	}
	printf("%c\n", (int)alpha + 32);*/

	char alpha[100];
	int count = 0;
	while (1) {
		char a;
		printf("알파벳 입력(0 종료):");
		scanf("%c", &a);
		getchar();
		if (a == '0'){
			alpha[count] = '\0';
		break;
		}
			alpha[count] = (int)a-32;
			count++;
	}
	printf("%s", alpha);


	return 0;
}