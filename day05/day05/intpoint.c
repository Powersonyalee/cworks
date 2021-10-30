
#include <stdio.h>

int main() {

	//정수형 포인터 선언 및 연산
	int data = 11;

	int* ip = &data; //선언고 동시에 저장

	printf("%x %d\n", &data, data); //data의 주소, 값
	printf("%x %x\n", &ip, ip);		//ip의 주소, data의 주소
	printf("%d %d\n", *ip, data);	//*ip의 값, data의 값

	printf("======포인터 연산========\n");
	printf("%x %d %d\n", &data, data, *ip + 0); // 주소, 11, 11
	printf("%x %d %d\n", &data+1, data+1, *ip + 1); //주소 , 12,12 // 주소는 4바이트씩 증가!!
	printf("%x %d %d\n", &data+3, data+3, *ip + 3); //주소 , 13,13 // 주소는 4바이트씩 증가!!
	


	return 0;
}
