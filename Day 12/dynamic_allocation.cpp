//dynamic_allocation

#include<stdio.h>
#include<stdlib.h>		//�����Ҵ� �ʼ�
#include<string.h>		//���� ������ �ʼ�

int main() {

	int num;
	printf("��ŭ ���� ����? \n");
	scanf("%d", &num);

	//malloc ����
	int* ptr;
	ptr = (int*)malloc(sizeof(int) * num);
	ptr[0] = 1;
	ptr[1] = 1;
	ptr[2] = 1;
	ptr[3] = 1;




	return 0;
}