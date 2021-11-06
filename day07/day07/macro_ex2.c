#include <stdio.h>
#define ADD(x,y) (x + y) //더하기 매크로 함수
#define MULTIPLY(x,y) ((x)*(y))  //곱하기 매크로 함수

/*int ADD(int a, int b) {
	return a + b;
}*/

int main() {

	int a = 10, b = 20;
	int result;
	
	printf("a+b=%d\n", ADD(a, b));  //add macro쓰면 함수를 호출해서 계산하는게 아니라, a+b가불러와짐
	printf("a*b=%d\n", MULTIPLY(a, b));

	result = 30 / MULTIPLY(2, 5);  // define MUTIPLY (X,Y) X*Y로 하면, 값이 75= 30/3*5 = 괄호생략시오류
	printf("result=%d\n", result);   //  MUTIPLY (X,Y) (X*Y)로 하면 result =3

	return 0;
}
