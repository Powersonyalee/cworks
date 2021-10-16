#include <stdio.h>

int main() {
	// 구구단 한개 단 출력하기 - 단을 입력받기

	int dan ;
		/*printf("단을 입력하세욥:\n");
		scanf_s("%d", &dan);*/

	for (dan = 1; dan <= 10; dan++) {


	int i; //iterator
		for (i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, (dan * i));
		}
}

	return 0;
}