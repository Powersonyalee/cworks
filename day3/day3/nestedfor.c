#include <stdio.h>

int main() {
	// 중첩 for 문
	int i, j;

	/*for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("가");
		}
	
		printf("\n"); // 다음 행 줄 바끔

	}

	//1행(i=0)- 가 가 가 가 가
	//2행(i=1)- 가 가 가 가 가

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("*");
		}

		printf("\n"); // 다음 행 줄 바끔

	}

	int dan;
	
	for (dan = 1; dan <= 10; dan++) { //전체 구구단


		int i; //iterator
		for (i = 2; i < 10; i++) {
			printf("%d x %d = %d\n", dan, i, (dan * i));
		}
		printf("\n");
	}*/

	// 직각 삼각형 모양의 별 찍기

	for (i = 0; i < 5; i++) {
		for (j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

 /* 
 1행(i=0) - *
 2행 (i=1)- **
 3행 (i=2)- ***
 4행 (i=3)- ****
 5행 (i=4)- *****
 */




	return 0;
}