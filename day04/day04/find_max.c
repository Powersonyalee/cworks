# include <stdio.h>

int findMax(int[], int );
int findMaxIdx(int[], int);

int main() {

	int num[] = { 21, 35,71,100,2,66,97 };
	int maxVal = findMax(num, 7);
	int maxIdx = findMaxIdx(num, 7);
	
	printf("�ִ밪 : %d\n", maxVal);
	printf("�ִ밪�� ��ġ%d\n", maxIdx);

	return 0;
}

int findMax(int num[], int len) {
	int max, i;
	//�ִ밪 ���� (�迭�� ù��°��)
	max = num[0];
	

	// �ݺ��ϸ鼭 ��

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


int findMaxIdx(int num[], int len) { //�ִ밪�� ��ġ ã��
	int maxIdx = 0;
	int i;

	for (i = 0; i < len; i++) {

		if (num[maxIdx] < num[i]) {
			maxIdx = i;
		}
	}
	return maxIdx;

}