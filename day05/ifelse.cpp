#include<stdio.h>

int main() {

	/*int eng = 80;

	if (eng > 90) {
		printf("A");
	}
	else if(eng > 80){
		printf("B");
	}
	else if (eng > 70) {
		printf("C");
	}
	else {
		printf("F");
	}*/

	//1. ������ �Է��ؼ� 90���ϸ� ����, 90�̸� ����, 90~180 �а� 180 ��

	int num;
	printf("������ �Է�:");
	scanf_s("%d", &num);

	if (0 < num && num < 90) {
		printf("�����Դϴ�.");
	}
	else if (num == 90) {
		printf("�����Դϴ�.");
	}
	else if (90 < num && num < 180) {
		printf("�а��Դϴ�.");
	}
	else {
		printf("���Դϴ�.");
	}

	return 0;
}