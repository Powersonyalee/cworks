 #include <stdio.h>

int main() {

	char a = 'A';
	printf("%c\n", a); //A 

	char* b; 
	b = &a;  //주소

	printf("포인터 b가 가르키는 값은 %c\n", *b); //A

	*b = 'B'; // 값을 변경, a의 값도 동시에 변경됨
	printf("a의 값은 %c\n", a); //B
	printf("포인터 b가 가르키는 값은 %c\n", *b); //B

	return 0;
}
