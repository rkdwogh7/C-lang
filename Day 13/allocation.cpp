#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//동적 할당 m alloc -> 얼만큼 무엇을

int main() {

	/*int* arr;
	arr = (int*)malloc(5 * sizeof(int));

	for (int i = 0; i < 5; i++) {
		arr[i] = i + 10;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}

	free(arr);  // 삭제
	
	*/


	//방 학생수 몇명인가요? 묻고, 학생의 영어 점수 각각 입력, 평균 구하기
	int num;
	printf("학생수 입력:");
	scanf("%d", &num);
	int* score;
	//int* engScores;
	score = (int*)malloc(num * sizeof(int));
	//engScores = (int *)malloc();
	int sum = 0;

	for (int i = 0; i < num; i++) {
		printf("%d번째 학생 영어 점수 입력:",i+1);
		scanf("%d", &score[i]);
		//int score
		//printf(   );
		//scanf("%d", &score);
		//engScores[i] = score;
		//sum += engScores[i];
		sum += score[i];
	}

	printf("학생들의 영어점수 평균은 %d", sum / num);
	free(score);

	return 0;
}
