#include <stdio.h>

int main() {

	//1. 0�Է������� �ҹ��� ���ĺ����� �Է��ϰ� 0�� ������ �빮�ڷ� �ٲٱ�
	/*char alpha;
	char str;
	while (1) {
		printf("���ĺ� �Է�:");
		scanf("%c", &alpha);
		str = alpha;
	}
	printf("%c\n", (int)alpha + 32);*/

	char alpha[100];
	int count = 0;
	while (1) {
		char a;
		printf("���ĺ� �Է�(0 ����):");
		scanf("%c", &a);
		getchar();
		if (a == '0'){
			alpha[count] = '\0';
		break;
		}
			alpha[count] = (int)a-32;
			count++;
	}
	printf("%s", alpha);


	return 0;
}