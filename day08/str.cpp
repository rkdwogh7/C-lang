#include<stdio.h> //printf, scanf
#include<string.h> //���ڿ� xƯȭ

//Clang-2024-01 -> �Ӽ� -> c/c++ -> ��ó���� ������ _CRT_SECURE_NO_WARNINGS
int main() {

	/*char str;
	printf("���ڿ��� �Է�:");
	scanf("%c", &str);
	printf("%c\n", str);*/

	char str1[20];
	printf("���ڿ��� �Է�:");
	scanf("%s", &str1);		//scanf_s("%s", &str1, sizeof(str1));
	printf("%s\n", str1);

	//¦����°�� a�� �ٲ��ִ� ���α׷� ����ϱ�]
	//char str[20];
	//printf("���ڿ� �Է�:");
	//scanf("%s", &str);
	//for (int i = 0; i < sizeof(str)/sizeof(char); i++) {
	//	if (str[i] == '\0') break;
	//	if (i % 2 == 1) {
	//		str[i] = 'a';
	//	}
	//}
	//printf("%s", str);

	/*char coffee[20];

	printf("Ŀ�� �Է�:");
	//scanf("%s", &coffee); //���� �νĺҰ�
	gets_s(coffee); //���ڿ� ���� �νİ��� �Լ�
	printf("%s", coffee); */

	char bread[] = "icebread";
	//���ڤ��� ���õ� �Լ� str~ strlen ->string length
	printf("%s�� ���̴� %d\n", bread, strlen(bread)); //				 8
	printf("%s�� ���̴� %d\n", bread, sizeof(bread)); //null���� ���� 9




	return 0;
}