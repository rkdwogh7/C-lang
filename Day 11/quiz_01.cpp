#include<stdio.h>


int main() {

	//1. char coffee[3][20]�� ���� �� �������� 3���� ���ڿ��� �Է� �ް�,
	// ������ �迭�� ����ؼ� ������ Ŀ�� �޴��� ���

	/*char coffee[3][20];
	for (int i = 0; i < 3; i++) { 
		printf("Ŀ�� 3���� �Է�:");
		scanf("%s", coffee[i]);
	}
	char(*pc)[20]; // 20������ ������ �迭

	for (int i = 0; i < 3; i++) {
		pc = &coffee[i];
		printf("%s\n", *(pc));
	}*/

	//2. int a =10, int b = 20�� �������� ���������͸� ������ ó������ a�� ����Ű�� �ڵ� �ۼ��ϰ�
	//��� �� b�� ����Ű�� �ڵ� �ۼ��ϰ� b�� ����ϴ� 

	int a = 10;
	int b = 20;
	int* pt;
	int** ppt;
	//ppt -> a
	pt = &a;
	ppt = &pt;
	printf("%d\n", **ppt);
	//ppt -> b
	pt = &b;
	printf("%d", **ppt);
	return 0;
}