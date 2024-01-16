#include <stdio.h>
#include <string.h>

int main() {


	//1. a,b를 각각 선언하고 10과 20을 넣은 후 포인터를 사용해서 서로 숫자 바꾸기
	//서로 바꿔줄때는 새로운 변수(공간) 만들어서 기억시켜줌
	int a = 10;
	int b = 20;
	int* pa = &a;
	int* pb = &b;
	int temp = *pa; // temp = 10
	*pa = *pb; // a = 20
	*pb = temp; // b = 10
	printf("%d, %d\n", a, b);


	//quiz 
	char king = 'k';
	char queen = 'q';
	char* pking = &king;
	char* pqueen = &queen;
	char temp1 = *pking;
	*pking = *pqueen;
	*pqueen = temp1;
	printf("%c, %c\n", king, queen);


	
	//2. 문자열 americano 선언후 정수 n문자m을 입력받고, n번째 글에서m문자로 바꾸기

	char coffee[] = "americano";
	int n;
	char m;
	printf("정수 n입력:");
	scanf("%d", &n);
	getchar();
	printf("문자 m입력:");
	scanf("%c", &m);
	getchar();
	coffee[n-1] = m;
	printf("%s\n", coffee);
	
	//3. 문자열 배열에서 오른쪽과 같이 있고 'americano', 'latte', 'vanila'  유저에게 문자열 입력받고 해당 커피를 추가한후 전부 보여주기
	char coffee1[] = "americano";
	char coffee2[] = "latte";
	char coffee3[] = "vanila";
	char coffee4[20];
	//char menu[4][20] = { {}, {}, {} };
	printf("커피 입력: ");
	scanf("%s", &coffee4);
	//char newMenu [20];
	// strcpy(어디에, 무엇을) 문자열 복사 --> <string.h>
	// strcpy(menu[3], newMenu);
	getchar();
	printf("%s, %s, %s, %s", coffee1, coffee2, coffee3, coffee4);


	return 0;
}