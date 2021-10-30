

#include <stdio.h>

int main() {
	//학생 5명의 수학, 영어 점수의 합계와 평균
	int x , y; 
	int score[5][2] = { 
		{75,80},
		{85,95},
		{93,100},
		{70,97},
		{85,55}};
	int total[2] = { 0,}; // 합계저장 ; 초기화시 = {0,0}을 해주는 것과 ={0,}은 동일하다; 뒤에 있다는 의미
	double avg[2] = { 0.0,0.0 }; //평균저장 배열

	// 출력
	
	for (x = 0; x < 5; x++) {//행
		for (y = 0; y < 2; y++) { //열
			printf("%3d", score[x][y]);
		}
		printf("\n"); // 2차원 문자에서 행줄바꿈
	}

	// 합계 
	for (x = 0; x < 5; x++) {
		total[0] += score[x][0];
		total[1] += score[x][1];
	}

	// 평균계산
	avg[0] = (double)total[0] / 5; // 자리수 나오게 하는 방법
	avg[1] = total[1] / 5.0; // 자리수나오게 하는 요령 

	printf("국어 합계는 %d, 평균은 %3.1lf\n", total[0], avg[0]); //% 3.1의 의미는 점을 포함해서 3자리
	printf("수학 합계는 %d, 평균은 %3.1lf\n", total[1], avg[1]);

	return 0;
}


