#include <stdio.h>


int callByVal(int);
int callByRef(int*);

int main() {
	int n = 10;
	int result = 0;

	printf("==callByVal 호출==\n");
	result = callByVal(n);
	printf("%d\n", result); //11
	printf("%d\n", n); // 10, 함수 내에 return주고 n 값은 사라짐(static 안쓰면).. but pointer를 쓰면 11이 됨

	printf("==callByRef 호출==\n");
	result = callByRef(&n);
	printf("%d\n", result); //11
	printf("%d\n", n); //11
	return 0;
}

int callByVal(int i) {
	i = i + 1;
	return i;
}

int callByRef(int* i) {
	*i = *i + 1;
	return *i;
}