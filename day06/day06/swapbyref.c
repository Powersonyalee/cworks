
# include <stdio.h>

void swapByVal(int, int);
void swapbyRef(int*, int*);

int main() {

	int a = 1, b = 2;

	printf("==���� ���� ȣ��==\n");
		swapByVal(a, b);
		printf("a= %d, b=%d\n", a, b);

	printf("==�ּҿ� ���� ȣ��==\n");
	swapbyRef(&a, &b);
	printf("a= %d, b=%d\n", a, b);

	return 0;
}


void swapByVal(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swapbyRef(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y= temp;
}