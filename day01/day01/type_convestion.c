#include <stdio.h>

int main() {



	// 자동 형변환 : 큰 자료형 =작은 자료형
	int iNum = 20;
	float fNum = iNum;
	printf("%f\n", fNum);
	 
	//강제형변환 : 작은자료형 = (작은 자료형) 큰자료형
	double dNum = 2.54;
	int iNum2 = (int)dNum;
	printf("%d\n", iNum2);


	// 연산
	dNum = 1.2;
	fNum = 0.9;

	iNum = (int)dNum + (int)fNum; 

	printf("%d\n", iNum); // 1
	
	iNum = (int)(dNum + fNum);

	printf("%d\n", iNum); // 2




	// 사칙연산(+,-, *, /)
	int n1 = 10, n2 = 4; //변수 중복 선언 -콤마 사용
	int result; // 변수 선언
	double result2;


	result = n1 + n2; //14
	printf("%d\n", result);

	result = n1 -n2; //6
	printf("%d\n", result);

	result = n1 * n2; //40
	printf("%d\n", result);

	result = n1 / n2; //2.5
	printf("%d\n", result);

	result2 = n1 / n2; //n1, n2 둘다  int라 result2 가 2 가 나옴
	printf("%.1lf\n", result2);


	result2 = (double)n1 / n2; // 2.5나옴 = > 나눗셈 주의 //손실이 나옴
	printf("%.1lf\n", result2);

	return 0;
}


