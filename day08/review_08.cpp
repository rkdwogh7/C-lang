#include<stdio.h>

int main() {

	//1. �ϳ��� ���� ������ n�� �޾� 1���� n������ Ȧ���� ���� ����ϴ� ���α׷�
	/*int num;
	int sum = 0;
	printf("���� �Է�:");
	scanf_s("%d", &num);
	getchar();
	for (int i = 0; i <= num; i++){
		if (i % 2 != 0) {
			sum += i;
		}
	}
	printf("%d\n", sum);*/

	//2. 0-100������ ������ �ݺ��ؼ� �Է¹޾�, �հ���հ����� ���
	//100�� ������ ����, �������� 0�Ǵ� ����, �Ǽ��� �Ҽ�����°�ڸ�
	int num1;
	int count = 0;
	int sum1 = 0;
	int average = 0;
	while (1) {
		printf("���� �Է�:");
		scanf_s("%d", &num1);
		if (num1 < 100 && num1 > 0) {
			sum1 += num1;
			count++;
		}
		if (num1 <= 0) break;
	}
	
	printf("����: %d, ���: %.2lf ����: %d", sum1, (double) sum1 / count, count);

	//3. ��Ģ����޴� ���α׷�
	
	/*int codeNumber;
	while (1) {
		printf("1.���ϱ�\n2.����\n,3.���ϱ�\n4.������\n5.����\n��ȣ�Է�:");
		scanf_s("%d", &codeNumber);

		switch (codeNumber) {
			case 1:
				int a, b;
				printf("ù ��° ���� �Է�:");
				scanf_s("%d", &a);
				printf("�� ��° ���� �Է�:");
				scanf_s("%d", &b);
				printf("%d + %d = %d", a, b, a + b);
				break;


		
			case 5:
				printf("���α׷� ����");
				return 0;
			default:
				printf("���ڸ� �߸� �Է� �Ͽ����ϴ�. �ٽ� �Է�:");
				break;
		}

	}*/
	




	return 0;
}