#include<stdio.h>

int main() {

	int arr[] = { 6,4,1,7,3,9,8 };
	int size = sizeof(arr) / sizeof(int);


	/*for (int i = 1; i < size; i++) {

		for (int j = i - 1; j >= 0; j--) {

			if (arr[j] > arr[i]) {			//한칸씩만 움직여짐
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	*/

	for (int i = 1; i < size; i++){
		
		int key = arr[i];
		int j;

		//key보다 큰 원소들은 한칸씩 뒤로 이동
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;	//적절한 위치에 key 삽입
	}



	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}