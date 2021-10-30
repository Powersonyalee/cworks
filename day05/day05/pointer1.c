
#include <stdio.h>

int main() {

	char ch = 'J';
	int iNum = 11;


	char* cp; //문자형 포인터 cp선언
	int* ip; // 정수형 포인터 ip선언

	cp = &ch; //포인터에 ch의 주소 저장
	ip = &iNum;  // 포인터에 iNum의 주소 저장


	printf("%x %c \n", cp, *cp); //cp는 주소; *cp는 주소에 있는 값
	printf("%d %d\n", sizeof(ch), sizeof(cp)); //1byte , 4byte
	//포인트 자료형의 크기는 모두 4byte 이다.

	printf("%x %d \n", ip, *ip); //ip의 저장값, *ip의 값 출력
	printf("%d %d\n", sizeof(iNum), sizeof(ip)); 4byte, 4byte

	return 0;
}
