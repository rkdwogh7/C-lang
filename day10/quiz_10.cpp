#include <stdio.h>
#include <string.h>

int main() {


	//1. a,b�� ���� �����ϰ� 10�� 20�� ���� �� �����͸� ����ؼ� ���� ���� �ٲٱ�
	//���� �ٲ��ٶ��� ���ο� ����(����) ���� ��������
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


	
	//2. ���ڿ� americano ������ ���� n����m�� �Է¹ް�, n��° �ۿ���m���ڷ� �ٲٱ�

	char coffee[] = "americano";
	int n;
	char m;
	printf("���� n�Է�:");
	scanf("%d", &n);
	getchar();
	printf("���� m�Է�:");
	scanf("%c", &m);
	getchar();
	coffee[n-1] = m;
	printf("%s\n", coffee);
	
	//3. ���ڿ� �迭���� �����ʰ� ���� �ְ� 'americano', 'latte', 'vanila'  �������� ���ڿ� �Է¹ް� �ش� Ŀ�Ǹ� �߰����� ���� �����ֱ�
	char coffee1[] = "americano";
	char coffee2[] = "latte";
	char coffee3[] = "vanila";
	char coffee4[20];
	//char menu[4][20] = { {}, {}, {} };
	printf("Ŀ�� �Է�: ");
	scanf("%s", &coffee4);
	//char newMenu [20];
	// strcpy(���, ������) ���ڿ� ���� --> <string.h>
	// strcpy(menu[3], newMenu);
	getchar();
	printf("%s, %s, %s, %s", coffee1, coffee2, coffee3, coffee4);


	return 0;
}