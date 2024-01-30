//shell_sort
#include<stdio.h>

int main() {

	int arr[] = { 10,8,6,20,4,3,22,1,0,15,16 };
	int size = sizeof(arr) / sizeof(int);
	int gap = size / 2;

	/*if (gap % 2 == 0) {
		for (int i = gap; i < size; i++) {
			int key = arr[i];
			int j;
			for (j = i - 1; j >= 0 && arr[j] > key; j--) {
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = key;
		}
	}
	else {
		gap = gap + 1;
		for (int i = gap; i < size; i++) {
			int key = arr[i];
			int j;
			for (j = i - 1; j >= 0 && arr[j] > key; j--) {
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = key;
		}
	}*/

	//int arr[] = { 10,8,6,20,4,   3,22,1,0,15,   16 };
	//gap을 배열 크기의 절반에서 시작하여 1이 될때까지 감소
	for (int gap = size / 2; gap > 0; gap /= 2) {

		//각 간격에 대해 간격만큼 떨어진 요소들을 비교
		for (int i = gap; i < size; i++) {
			//현재 검사하는 요소를 잠시 저장
			int temp = arr[i];
			int j = i;
			//이전의 각격만큼 떨어진 요소들을 검사하며 정렬
			while (j >= gap && arr[j - gap] > temp) {
				arr[j] = arr[j - gap];
				j -= gap;
			}
			arr[j] = temp;
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

