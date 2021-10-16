

#include <stdio.h>
# define _CRT_SECURE_NO_WARINGS	


int main() {
	// 내부 if문
	// 조건 수가 10보다 크고 짝수인 경우
	// 수가 10보다 크고 홀수인경우
	// 수가 10보다 작고 짝수인경우
	// 수가 10보다 작고 홀수인 경우
	// 수가 10보다 작은 홀수

	int num ;
	printf("수를 입력하세요: ");
	scanf_s("%d", &num);


	// if ~ else if else

	/*if (num >= 10) {
		if (num % 2 == 0) {
			printf("%d는 10이상의 짝수입니다.\n", num);
		}

		else {
			printf("%d는 10이상의 홀수입니다.\n", num);
		}
	}

	else {

		if (num % 2 == 0) {
			printf("%d는 10보다 작은 짝수입니다.\n", num);
		}

		else {
			printf("%d는 10보다 작은홀수입니다.\n", num);
		}

	}


	return 0;
}*/


if (num >= 10 && num % 2 == 0) {
	
		printf("%d는 10이상의 짝수입니다.\n", num);
	}
else if (num >= 10 && num % 2 !=0) {
		printf("%d는 10이상의 홀수입니다.\n", num);
	}
else if (num <= 10 && num % 2 == 0) {
		printf("%d는 10보다 작은 짝수입니다.\n", num);
	}
else {
		printf("%d는 10보다 작은홀수입니다.\n", num);
	}
return 0;
}
