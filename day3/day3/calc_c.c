#include <stdio.h>

int main() {
	// operator 값이 +, -, *,/ 인경우 사칙연산
	int num1 = 10;
	int num2 = 2;
	char operator = '%';
	int result =0;
	// switch ~ case문 작성

	switch (operator) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
		printf("연산자 오류입니다.\n");
		return;
	}


	/*if (operator == '+') {
		result = num1 + num2;
	}
	else if (operator == '-') {
		result = num1 - num2;
	}
	else if (operator == '*') {
		result = num1 * num2;
	}
	else if (operator == '/') {
		result = num1 / num2;
	}
	else {
		printf("연산자 오류입니다.\n");
		return; // 즉시종료, break 쓰면 안 됨
	}*/


	printf("결과 값은 %d입니다.", result);
	return 0;
}