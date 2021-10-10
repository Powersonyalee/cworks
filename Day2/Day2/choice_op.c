



# include <stdio.h>

int main() {

	// 조건 연산자 - 조건식 ? 참(1) : 거짓(0)
	int value;
	value = (3 > 4) ? 10 : 20;
	printf("결과 값 :  %d\n", value); // 20

	int fatherAge = 35;
	int motherAge = 39;


	printf("%d\n", &fatherAge); // 주소의 값(10진수)이 나옴

	printf("%x\n", &fatherAge); // 주소의 값(16진수)이 나옴


	char ch = (fatherAge > motherAge) ? 'T' : 'F';
	printf("결과 값 :  %c\n", ch); // F

	// fatherAge나 motherAge를 외부에서 입력하는 경우, 그때그때 결과값이 달라질 것





	return 0;

}