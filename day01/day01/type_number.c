#include <stdio.h>

int main() {

	// 숫자 자료형의 범위 // 
	char val1 = -128; // character  범위 => -128~ 127
	printf("%d\n", val1);

	char val2= 128; // character  범위 => -128~ 127
	printf("%d\n", val2); // -128이 산출됨 ; 이유) 범위를 초과 시, over flow(순환됨..)
	
						  // 128넣고 싶으면 shrt나 int로 바꾸기

	unsigned char val3 = 128; // unsigned range is 0-225
	printf("%d\n", val3);


	// int형 자료
	int iNum = 2147483647; // -21억 ~21억
	printf("%d\n", iNum);
	int iNum2 = 2147483648; // -21억 ~21억
	printf("%d\n", iNum2); // -2147483648로 나옴: overflow 이므로 long 형 쓰기

	//실수형 정밀도 비교
	
	float fNum = 1.1234567; //float 소수 6자리까지 가능
	double dNum = 1.123456789012345;  // double 소수 15자리 까지 가능

	printf("%f\n", fNum);
	printf("%.15lf\n", dNum);





	return 0;
}