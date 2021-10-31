
# include <stdio.h>

int a = 10; // 전역변수

int main() {

	int num1 = 10, num2 = 20; //지역변수
	static int s = 30;		  //정적변수

	printf("코드영역: 0x%p, 0x%p\n", main, printf); //함수는 코드영역
	printf("스택영역: 0x%p, 0x%p\n", &num1, &num2); //지역변수
	printf("스택영역: 0x%p, 0x%p\n", &a, &s); //전역변수, 정적변수

	return 0;
}
