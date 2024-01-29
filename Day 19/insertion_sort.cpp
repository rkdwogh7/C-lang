#include<stdio.h>

int main() {

	int arr[] = { 6,4,1,7,3,9,8 };
	int size = sizeof(arr) / sizeof(int);


	/*for (int i = 1; i < size; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}*/

	for (int i = 1; i < size; i++) {
		//현재 정렬할 원소
		int key = arr[i];
		//정렬된 부분을 역순으로 탐색하면서 key 보다 큰 원소들은 한 칸씩 뒤로 빠꾸
		int j;
		for (int j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		} 
		//적절한 위치에 key 넣기
		arr[j + 1] = key;
	
	}



	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}


	return 0;
}