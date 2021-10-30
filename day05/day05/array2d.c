

#include <stdio.h>

int main() {
	// 학생 3명의 수학, 영어 점수 저장
	// kim - 75,80 	// lee - 85,90 	// sun - 90, 100

	//int a[3][2]; //2차원 a 배열 선언
	int x; // 반복변수
	int y;

	// 저장방법-1
	/*a[0][0] = 75;
	a[0][1] = 80;
	a[1][0] = 85;	
	a[1][1] = 90;
	a[2][0] = 90;
	a[2][1] = 100;*/


	// 저장방법-2
	//int a[3][2] = { 75,80,85,90,90,100 };
	// 저장방법-3
	int a[3][2] = { {75,80},{85,90},{90,100} };


	//출력1
	for (x = 0; x < 3; x++) {
		printf("%d %d\n",a[x][0], a[x][1] );
	}

	//출력2
	for (x = 0; x < 3; x++) {//행
		for (y = 0; y < 2; y++) { //열
			printf("%3d", a[x][y]);
		}
		printf("\n"); // 2차원 문자에서 행줄바꿈
	}
	return 0;
}


