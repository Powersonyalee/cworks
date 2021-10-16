


#include <stdio.h>

int main() {

	// 1 부터 n까지 더하기
	int n = 0; // 반복횟수
	int sum = 0; // 합계를 저장할 변수
	

	while (n <= 10) {
		sum = sum + n;
		printf("n=%d, sum=%d\n", n, sum);
		n=n+1;
			}
		printf("sum=%d\n", sum);
/* n = n + 1;	// 1(sum)
	n += n ;	// 3
	n += n ;  //6
	n += n ; //10 
	*/


	return 0;
}