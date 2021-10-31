
# include <stdio.h>
// �ִ밪��� 
int findMax(int*, int);

//�ִ밪�� ��ġ ��� 
int findMaxIdx(int*, int);

int main() {

	int arr[] = { 80, 70, 60, 90, 40, 10 };
	int max = findMax(arr, 6);
	printf("�ִ밪�� %d", max);

	int maxIdx = findMaxIdx(arr, 6);
	printf("�ִ밪�� %d", maxIdx);
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
	int maxIdx = 0; //0�� �ε���
	int i;

	for (i =1 ; i < len; i++) {

		if (*(a + maxIdx) < *(a + i)) {
			maxIdx = i;
		}
	}
return maxIdx;
}