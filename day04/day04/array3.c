# include <stdio.h>
int main() {

	int family[3];

	family[0] = 101;
	family[1] = 102;
	family[2] = 103;

	printf("시은이네 호텔 방 번호는 %d호입니다. \n", family[0]);
	printf("지훈이네 호텔 방 번호는 %d호입니다. \n", family[1]);
	printf("할아버지 할머니 호텔 방 번호는 %d호입니다. \n", family[2]);


	printf("%x\n", &family[0]); 
	printf("%x\n", family); // 동일한 주소가 나옴. 배열의 이름이 배열의 시작주소와 동일하다!!
	return 0;
}
