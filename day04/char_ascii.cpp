#include<stdio.h>

int main() {


	//char a, b;			// m,n
	//scanf_s("%c ", &a);  // m enter
	////1. getchar();			//enter 흡수
	////2. scanf_S에 띄어쓰기 넣기
	//scanf_s("%c", &b);  // n
	//printf("%c %c\n", a, b);

	////1. 숫자를 입력하면 알파벳 나오기
	//int num;
	//printf("숫자를 입력:");
	//scanf_s("%d", &num);
	//printf("%c", num);

	/*2. 유저에게 어떠한 문자를 받고 알파벳이면 1 아니면 0
	char text;
	printf("문자를 입력:");
	scanf_s("%c", &text);
	printf("%d\n", (65 <= text && text<= 90) || (97 <= text && text <= 122) ? 1 : 0);*/
	char text;
	printf("문자를 입력:");
	scanf_s("%c", &text);
	getchar();
	int isCapital, isSmall, toAscii;
	toAscii = (int)text;
	isCapital = 65 <= toAscii && toAscii <= 90;
	isSmall = 97 <= toAscii && toAscii <= 122;
	printf("%d\n", isCapital || isSmall ? 1 : 0);

	//3. 대문자 알파벳을 입력하면 소문자로 출력하기
	char text2;
	printf("대문자 알파벳 입력:");
	scanf_s("%c", &text2);
	getchar();							//scanf_s함수 두번
	/*toAscii = (int)text2;
	printf("%c", text2 + 32);*/
	printf("소문자:%c", (char)((int)text2 + 32));

	


	return 0;
}