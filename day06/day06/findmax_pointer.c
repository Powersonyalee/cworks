
# include <stdio.h>
// 최대값계산 
int findMax(int*, int);

//최대값의 위치 계산 
int findMaxIdx(int*, int);

int main() {

	int arr[] = { 80, 70, 60, 90, 40, 10 };
	int max = findMax(arr, 6);
	printf("최대값은 %d", max);

	int maxIdx = findMaxIdx(arr, 6);
	printf("최대값은 %d", maxIdx);
	return 0;
}


int findMax(int* a, int len) {
	int maxVal = *a; //*(a+0)
	int i;

	for (i = 1; i < len; i++) {
		if (maxVal < *(a + i)) {
			maxVal = *(a + i);
		}		
	}
return maxVal;
}

int findMaxIdx(int* a, int len) {
	int maxIdx = 0; //0번 인덱스
	int i;

	for (i =1 ; i < len; i++) {

		if (*(a + maxIdx) < *(a + i)) {
			maxIdx = i;
		}
	}
return maxIdx;
}