#include <stdio.h>

int main() {
	// 배열 포인터 선언 및 사용

	int a[4] = { 1,2,3,4 };
	int i;
	int* b;
	b = a; //b = &a[0]; 앞에 내용과 동일... 이유:배열은 주소가 배열과 동일하므로


	printf("== 배열 a 출력==\n");
	for (i = 0; i < 4; i++) {
		printf("%2d\n", a[i]);
	}

	printf("\na[0]의 값 : %d\n", a[0]); //1
	printf("a[0]의 값 : %d\n", *b);   //1

	printf("==포인터 배열 b 출력==\n");
	for (i = 0; i < 4; i++) {
		printf("%2d\n", *(b+i));
	}
	//*(b+0) = * b 
	//*(b+1) = *b +1
	//*(b+2) = *b +2
	return 0;
}
