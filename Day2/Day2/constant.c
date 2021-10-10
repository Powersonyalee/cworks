


#include <stdio.h>

int main() {


	// 상수 -const // 상수는 대문자로 표기(관행)
	int min_num = 1;
	const int MAX_NUM = 100;
	const float PI = 3.1415;// 상수 PI에 3.1415를 저장함
	int radius = 5;
	float area;

	min_num = 1000;
	
	// max_num= 1000;오류 발생 ; 상수는 변경할 수 없음 ex) pi =3.14 같으거 변경못하도록

	printf("%d\n", min_num);
	printf("%d\n", MAX_NUM);
	printf("%d\n", MAX_NUM);


	// 원의 넓이 계산하기: pi * 반지름 * 반지름
	area = PI * radius * radius;
	printf("원의 넓이 : %.2f\n", area);



	return 0;

}