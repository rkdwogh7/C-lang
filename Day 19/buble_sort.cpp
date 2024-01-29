#include<stdio.h>



int main() {


	int arr[] = { 6,4,3,7,1,9,8 };
	int size = sizeof(arr) / sizeof(int);

	//앞에서부터 비교
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d\n", arr[i]);
	}

	//뒤에서부터 비교

	/*for (int j = 0; j < sizeof(arr) / sizeof(int); j++) {

		for (int i = (sizeof(arr) / sizeof(int)) - 1; i >= 0; i--) {

			if (arr[i] < arr[i - 1]) {
			int temp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = temp;
			}
		}
	}*/


	
	return 0;
}