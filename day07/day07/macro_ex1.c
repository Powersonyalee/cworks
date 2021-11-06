#include <stdio.h>
#define PI 3.14  // 메크로 상수

int main() {
	
	//const int PI = 3.14; //const로 쓰면 메모리 할당되서, 밑에서 수정이 안됨
	//PI = 3.66; 상수는 변경불가

	// 원의 넓이와 둘레를 계산
	int radius;				//반지름
	double area, circum;	//넓이, 둘레

	puts("반지름을 입력하세요 : ");
	scanf_s("%d", &radius);

	//원의 넓이 = PI * 반지름 * 반지름
	area = PI * radius * radius;
	printf("원의 넓이: %.2lf", area);


	//원의 둘레 =2*PI*radius
	circum = 2 * PI * radius;
	printf("원의 둘레: %.2lf", circum);

	return 0;
}
