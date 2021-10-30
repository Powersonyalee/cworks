
#include <stdio.h>

int myAbs(int);
int main() {

	int value=	myAbs(-5);
	printf("%d\n", value);
	return 0;
}


int myAbs(int x) { //음수는 양수로, 양수는 양수로
	if (x < 0) {
		return -x;
	}
	else {
		return x;
	}
	/*if (x < 0) {
		x = abs(x);
	}
	return x;*/
}
