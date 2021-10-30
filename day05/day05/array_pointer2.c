
#include <stdio.h>


void myprint(int*);
int main() {

	int num[] = { 1,2,3,4 };
	myprint(num); // 배열은 &주소연산자를 넣지 않는다!!
	
	return 0;
}

void myprint(int* n) { // n=num

	int i;
	for (i =0; i < 4; i++) {
		printf("%2d", *(n + i));
	}
}