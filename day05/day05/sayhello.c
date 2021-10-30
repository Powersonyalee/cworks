
#include <stdio.h>


void sayHello(char name[]) {
	printf("Hello~ %s\n", name);
}

void sayHello2(char* name) {
		printf("Hello~ %s\n", name);
}



int main() {

	sayHello("sunny"); //배열로 호출 (간접주소)
	sayHello2("Hyunsoo"); //포인터로 호출 (간접주소)
	return 0;
}
