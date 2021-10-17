# include <stdio.h>
int main() {
	int arr[] = { 10,20,30,40 }; // 처음부터 초기화 하는 방법 : 방법2
	int i;
	int sum = 0;

	// 30을 출력
	printf(" a[2] = %d\n", arr[2]); // indexing 하는 법

	// 전체 출력
	for (i = 0; i < 4; i++) {
		printf(" %3d", arr[i]);
	}

	for (i = 0; i < 4; i++) {
		sum += arr[i]; // 값을 더하기
	}

	printf("\n합계 : %d", sum);

	return 0;
}
