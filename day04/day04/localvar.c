# include <stdio.h>

void ab10(int a, int b) { //ab10 함수의 지역변수
	a *= 10; // a=a*10
	b *= 10; // b=b*10
	}

int main() {

	int a, b; // main의 지역함수

	a = 1;
	b = 2;

	ab10(a, b); // 여기선 a,b가 ab10내에 값을 주고, 소멸함...

	printf("a= %d, b = %d", a, b); // 1,2 main의 a,b임

	return 0;
}


