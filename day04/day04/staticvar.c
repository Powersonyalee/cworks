# include <stdio.h>

void count() {

	int x = 0;		// 지역변수
	static int y = 0; // 정적(고정) 변수(static 키워드 사용) ;  정적변수가 쓰는 메모리가 다름(동적변수와)
	x += 1;
	y += 1;
	printf("x= %d, y= %d\n", x, y);

}

int main() {

	count();
	count();

	return 0;
}

