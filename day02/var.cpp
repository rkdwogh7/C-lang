//var
#include<stdio.h>

int main() {
	//����[cpu], ���[ram]
	// ����[��� �����ִ� ��]

	//int today = 4;          ���� int								%d
	//float stock = 2124.6;   �Ǽ� float								%f
	//double height = 170.5;  �Ǽ� double (������ �� ũ��)			%lf
	//char coffee_size = 'L'; ���� char ���ĺ� or Ư������ ����		%c
	//printf("���� ��¥�� %d���Դϴ�.", today);


	int today = 4;
	float nasdaq = 14592.21;				//���ڿ� ,�� ���Ұ�   %.2f --> �Ҽ��� 2�ڸ����� ǥ��
	double bitcoin = 56189766.78;
	char coffee_size = 'M';

	printf("������ %d���Դϴ�. ������ �ֽ��� %.2f�̰�, ��Ʈ���� ������ %lf�̰�, ���� Ŀ�� ������ �ֹ��� %c������ �Դϴ�.",today,nasdaq,bitcoin,coffee_size);





	return 0;
}