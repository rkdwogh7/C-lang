#include<stdio.h> //printf, scanf
#include<string.h> //문자열 x특화

//Clang-2024-01 -> 속성 -> c/c++ -> 전처리기 맨위에 _CRT_SECURE_NO_WARNINGS
int main() {

	/*char str;
	printf("문자열을 입력:");
	scanf("%c", &str);
	printf("%c\n", str);*/

	char str1[20];
	printf("문자열을 입력:");
	scanf("%s", &str1);		//scanf_s("%s", &str1, sizeof(str1));
	printf("%s\n", str1);

	//짝수번째를 a로 바꿔주는 프로그램 출력하기]
	//char str[20];
	//printf("문자열 입력:");
	//scanf("%s", &str);
	//for (int i = 0; i < sizeof(str)/sizeof(char); i++) {
	//	if (str[i] == '\0') break;
	//	if (i % 2 == 1) {
	//		str[i] = 'a';
	//	}
	//}
	//printf("%s", str);

	/*char coffee[20];

	printf("커피 입력:");
	//scanf("%s", &coffee); //띄어쓰기 인식불가
	gets_s(coffee); //문자열 띄어쓰기 인식가능 함수
	printf("%s", coffee); */

	char bread[] = "icebread";
	//문자ㅇ에 관련된 함수 str~ strlen ->string length
	printf("%s의 길이는 %d\n", bread, strlen(bread)); //				 8
	printf("%s의 길이는 %d\n", bread, sizeof(bread)); //null문자 포함 9




	return 0;
}