#include<stdio.h>

int main() {


	int arr[5] = { 2,4,6,8,10 };
	printf("%d\n", arr); //arr 배열의 주소값
	printf("%d\n", &arr);
	printf("%d\n", &arr[0]);
	printf("%d\n", &arr[1]);
	printf("%d\n", arr + 1);
	printf("%d\n", *(arr + 1));

	printf("%d\n", arr[2]);
	int* p2 = &arr[2];
	*p2 = 100;
	printf("%d\n", arr[2]);

	for (int i = 0; i < 5; i++){
		printf("%d ", *(arr + i));
	}
	printf("\n");

	int arr1[4] = { 1,2,3,4 };
	int(*pa)[4] = &arr1;			//배열 포인터

	for (int i = 0; i < 4; i++) {
		printf("%d ", (*pa)[i]);
	}
	printf("\n");

	int matrix[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	
	int(*pb)[4] = &matrix[2];

	for (int i = 0; i < 4; i++) {
		printf("%d ", (*pb)[i]);
	}
	printf("\n");

	char menu[4][20] = { {"cookie"}, {"bread"}, {"macaron"}, {"hotdog"} };

	char(*ptr)[20] = &menu[2];
	printf("%s\n", ptr);
	(*ptr)[0] = 'k';
	printf("%s\n", ptr);

	
	return 0;
}