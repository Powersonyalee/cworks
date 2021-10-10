


# include <stdio.h>

int main() {

	// 변수값 교환하기
	int blue = 1;
	int red = 2;
	printf("=========교환전 =========");
	printf("blue=%d, red =%d\n", blue, red);


	// 교환처리
	int yellow;
	
	yellow = blue;
	blue = red;
	red = yellow;
	
	printf("=========교환후 =========");
	printf("blue=%d, red =%d\n", blue, red);

	return 0;

}