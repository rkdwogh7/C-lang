#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//���� �Ҵ� m alloc -> ��ŭ ������

int main() {

	/*int* arr;
	arr = (int*)malloc(5 * sizeof(int));

	for (int i = 0; i < 5; i++) {
		arr[i] = i + 10;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}

	free(arr);  // ����
	
	*/


	//�� �л��� ����ΰ���? ����, �л��� ���� ���� ���� �Է�, ��� ���ϱ�
	int num;
	printf("�л��� �Է�:");
	scanf("%d", &num);
	int* score;
	//int* engScores;
	score = (int*)malloc(num * sizeof(int));
	//engScores = (int *)malloc();
	int sum = 0;

	for (int i = 0; i < num; i++) {
		printf("%d��° �л� ���� ���� �Է�:",i+1);
		scanf("%d", &score[i]);
		//int score
		//printf(   );
		//scanf("%d", &score);
		//engScores[i] = score;
		//sum += engScores[i];
		sum += score[i];
	}

	printf("�л����� �������� ����� %d", sum / num);
	free(score);

	return 0;
}
