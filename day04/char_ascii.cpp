#include<stdio.h>

int main() {


	//char a, b;			// m,n
	//scanf_s("%c ", &a);  // m enter
	////1. getchar();			//enter ���
	////2. scanf_S�� ���� �ֱ�
	//scanf_s("%c", &b);  // n
	//printf("%c %c\n", a, b);

	////1. ���ڸ� �Է��ϸ� ���ĺ� ������
	//int num;
	//printf("���ڸ� �Է�:");
	//scanf_s("%d", &num);
	//printf("%c", num);

	/*2. �������� ��� ���ڸ� �ް� ���ĺ��̸� 1 �ƴϸ� 0
	char text;
	printf("���ڸ� �Է�:");
	scanf_s("%c", &text);
	printf("%d\n", (65 <= text && text<= 90) || (97 <= text && text <= 122) ? 1 : 0);*/
	char text;
	printf("���ڸ� �Է�:");
	scanf_s("%c", &text);
	getchar();
	int isCapital, isSmall, toAscii;
	toAscii = (int)text;
	isCapital = 65 <= toAscii && toAscii <= 90;
	isSmall = 97 <= toAscii && toAscii <= 122;
	printf("%d\n", isCapital || isSmall ? 1 : 0);

	//3. �빮�� ���ĺ��� �Է��ϸ� �ҹ��ڷ� ����ϱ�
	char text2;
	printf("�빮�� ���ĺ� �Է�:");
	scanf_s("%c", &text2);
	getchar();							//scanf_s�Լ� �ι�
	/*toAscii = (int)text2;
	printf("%c", text2 + 32);*/
	printf("�ҹ���:%c", (char)((int)text2 + 32));

	


	return 0;
}