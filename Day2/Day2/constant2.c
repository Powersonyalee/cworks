


// c언어가 다른 프로그램 보다 빠른 것을 보여주는 예

# include <stdio.h>
# define PI 3.1454 
# define MIN_NUM 1
# define MAX_NUM 100
// defien : macro 상수(전처리) => 상수로 정의 ; int 밑에서, 컴파일을 하지 않음... 그래서 메모리를 덜 쓰고, 더 빠름


int main() {

	int r = 5;
	float area;
	area = PI * r * r;

	// MIN_NUM = 10; 컴파일 에러 발생!! 전처리 과정에서 상수 정의했으므로...

	printf("원의 넓이 : %.2f\n", area);
	printf("최대값 : %d\n", MAX_NUM);
	printf("최소값 : %d\n", MIN_NUM);

	return 0;
}