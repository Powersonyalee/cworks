# include <stdio.h>
# include "add.h" // 만드건 쌍따로

int main() {

	int a, b, result;
	a = 1; 
	b = 2;

	result = add_func(a, b);
	printf("합계 : %d\n", result);
	
	return 0;
}

