#include<stdio.h>

int main() {

	/*int score[2][3] = { {1,2,3},{4,5,6} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf(" %d ", score[i][j]);
		}
	}*/

	//�л� 3��,�� �� �� ���� ���а����� ���
	int score[3][3] = { { 75,85,85 }, { 90,80,70 }, { 60,100,90 } };
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += score[i][1];
	}
	printf("%.2lf", (double)sum / 3);

	


	return 0;
}