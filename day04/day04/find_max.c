# include <stdio.h>

int findMax(int[], int );
int findMaxIdx(int[], int);

int main() {

	int num[] = { 21, 35,71,100,2,66,97 };
	int maxVal = findMax(num, 7);
	int maxIdx = findMaxIdx(num, 7);
	
	printf("최대값 : %d\n", maxVal);
	printf("최대값의 위치%d\n", maxIdx);

	return 0;
}

int findMax(int num[], int len) {
	int max, i;
	//최대값 설정 (배열의 첫번째값)
	max = num[0];
	

	// 반복하면서 비교

	for (i = 0; i < len; i++) {

		if (max < num[i]) {
			max = num[i];
		}
	}
	
	// i =1, 21<35 , max =35
	// i =2, 35<71 , max =71
	// i =3, 71<2  , max =71
	// i =4, 71<66 , max =71
	// i =5, 71<97 , max =97

	return max;

}


int findMaxIdx(int num[], int len) { //최대값의 위치 찾기
	int maxIdx = 0;
	int i;

	for (i = 0; i < len; i++) {

		if (num[maxIdx] < num[i]) {
			maxIdx = i;
		}
	}
	return maxIdx;

}