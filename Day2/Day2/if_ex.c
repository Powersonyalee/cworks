
# include <stdio.h>
# define _CRT_SECURE_NO_WARNINGS

int main() {

	// 단독 if 문
	int age = 7;
	if (age < 8) { // 참이면 1, 거짓이면 0

		printf("학교에 가지 않습니다.\n");
	}

		printf("나이는 %d세 입니다.\n", age);
	


	// if -else 문
	int score = 70;

	if (score >= 60) {
	printf("합격입니다.\n");
	}
	else { // (score < 60) 생략
	printf("불합격 입니다.\n");
	}
	printf("점수는 %d입니다.\n", score);

	//짝수, 홀수 판정하는 프로그램

	int num;
	printf("정수를 입력하십찌욥 : ");
	scanf_s("%d", &num);

	printf("%d\n", num);

	if (num % 2 == 0) {

		printf("짝수입니다.\n");
	}
	else { // num %2 ==1
		printf("홀수입니닷.\n");
	}

	return 0;
}

