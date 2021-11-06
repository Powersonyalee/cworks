#include <stdio.h>
#define VER 10 // 치환값이 있는 메크로명 정의
//#define BIT16 // 치환값이 없는 메크로명 정의



int main() {
	int max = 0;

#if VER >= 10
	printf("버전 %d입니다.\n", VER);
#endif 
	printf("\n===============================\n");

#ifdef BIT16
	max = 32767;  // bit16이 정의되어 있다면 이 값을 출력하라는 것이므로, 밑에 max가 활성화 안됨
#else 
	max = 2147483647;// bit16이 정의되어 있지 않다면

#endif
	printf("int형 변수의 최대값: %d\n", max);

	return 0;
}

