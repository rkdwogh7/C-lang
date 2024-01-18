#include <stdio.h>

int square(int n) {

	return printf("%d * %d = %d",n,n,n * n);
}
/* void square(int* num) {
	
	*num = *num * *num;
}
*/

int sumarray(int num[]) {
	int sum = 0;
	for (int i = 0; i < 20; i++) {
		sum += num[i];
	}
	return printf("%d", sum);
}

/* int sumArray(int*arr, intsize){
		int sum = 0;
		for(int i = 0;i<size; i++){
		sum += arr[i]
		}
	return sum;
}

*/

int main() {

	//1. n을 square함수에 넣었을때 정사각형 넓이로 변환해주는 함수 작성
	int n;
	printf("정사각형 한변 입력:");
	scanf("%d", &n);
	square(n);

	/*int n = 5;
	square(&n);
	printf("%d", n);
	*/

	//2. 정수 배열을 넣었을때, 정수 배열의 합을 돌려주는 함수 작성
	int num[20];
	for (int i = 0; i < 20; i++) {
		printf("정수 배열 입력:");
		scanf("%d", num[i]);
	}
	sumarray(num[20]);

	/* int arr[5] = {5,12,6,9,46};
	int sum = sumArray(arr, sizeof(arr) / sizeof(arr[0]));
	printf("%d", sum);
	*/




	return 0;
}