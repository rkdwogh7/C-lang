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
	//gap�� �迭 ũ���� ���ݿ��� �����Ͽ� 1�� �ɶ����� ����
	for (int gap = size / 2; gap > 0; gap /= 2) {

		//�� ���ݿ� ���� ���ݸ�ŭ ������ ��ҵ��� ��
		for (int i = gap; i < size; i++) {
			//���� �˻��ϴ� ��Ҹ� ��� ����
			int temp = arr[i];
			int j = i;
			//������ ���ݸ�ŭ ������ ��ҵ��� �˻��ϸ� ����
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

