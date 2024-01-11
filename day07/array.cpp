#include<stdio.h>

int main() {

	//array [배열]
	/*
	1. 배열 선언 및 초기화
		int score[5] = { 100,30,40,50,20 };
	2. 배열 선언 및 초기화
		int weight[] = { 100,200,300,400,500,600 };
	3. 배열 선언
		int height[10];
	4. 배열의 인덱스의 시작 0!
		height[0] = 188;
	*/

	//반 학생이 5명일때, 수학점수 5명 입력받고, 반 평균 구하는 프로그램

	int score[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("수학점수 입력:");
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	/*
	for (int i = 0; i < 5; i++) {
		printf("수학점수 입력:");
		scanf_s("%d", &score[i]);
	}
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d번째 학생 점수 : %d", i+1, score[i]);
		sum += score[i];
	}
	*/
	printf("평균: %.2lf\n", double(sum / 5));

	//반 평균 5명의 키

	/*double height[5];
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("키를 입력:");
		scanf_s("%lf", height[i]);
		getchar();
		sum += height[i];
	}
	printf("평균 키: %.2lf", double(sum / 5));*/


	//1번째 char배열 선언법
	char it[] = { 'm','e','g','a','s','t','u','d','y','!','\0'};
	char starbuks[20] = {'l','a','t','t','e','\0'};
	char megacoffee[20];

	//printf("%d\n", sizeof(int)); //4byte
	//for (int i = 0; i < sizeof(it); i++) {
	//	printf("%c", it[i]);
	//}

	megacoffee[0] = 'l';
	megacoffee[1] = 'a';
	megacoffee[2] = 't';
	megacoffee[3] = 't';
	megacoffee[4] = 'e';
	megacoffee[5] = '\0';	// null 없으면 어디가 끝인지 모름/ 20개 알아서 채움

	//%c로 문자 배열 출력
	for (int i = 0; megacoffee[i] != '\0'; i++) {

		printf("%c\n", megacoffee[i]);
	}

	//%s로 문자 배열 출력
	printf("%s\n", it);

	

	return 0;
}