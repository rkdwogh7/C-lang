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
		//���� ������ ����
		int key = arr[i];
		//���ĵ� �κ��� �������� Ž���ϸ鼭 key ���� ū ���ҵ��� �� ĭ�� �ڷ� ����
		int j;
		for (int j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		} 
		//������ ��ġ�� key �ֱ�
		arr[j + 1] = key;
	
	}



	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}


	return 0;
}