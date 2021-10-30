# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char a[10];
	char* b;

	printf("문자를 입력하세요 : ");
	scanf("%s,", a);
	// a[] ="apple"
	b = a; //a의 주소를 넣는것!!
	printf("저장된 문자열 : %s\n", b);




	return 0;
}
