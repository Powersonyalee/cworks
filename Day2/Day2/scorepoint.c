

# include <stdio.h>

int main() {

	// 학점을 판정하는 프로그램
	// 90점 이상 A, 80점 이상 B, 70점 이상 C, 60점 이상 D, 60점 미만 F
	int score;
	printf("점수를 입력하세요: \n");
	scanf_s("%d", &score);


	char ch; //= 'A' 하면 초기화 하기.
	
	if (score < 60) {
		ch= 'F';
		
	}
	else if ( score >= 60 && score < 70) {
		ch = 'D';
	}
	else if (score >= 70 && score < 80) {
		ch = 'C';

	}

	else if (score >= 80 && score < 90) {
		ch = 'B';
	}
	else {
		ch = 'A';
	}
	printf("%c학점 입니다.\n", ch);




	return 0;

}