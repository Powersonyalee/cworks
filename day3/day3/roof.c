#include <stdio.h>

int main() {
	// 1부터 n까지 출력 - 무한반복문(반복조건문)
	// while ~ if ~ break문
	// while (1)은 true라서 while 조건이 무한반복.. cmd창 ctrl +c로 중지시키기
	// 1부터 더할 때 그 합이 100이 넘는 자연수


	// n=0일때, n=1일때 코딩이 달라진다.
	int n = 0; 
	int sum = 0;
	/*while (1) { 
		n++;
		printf("%d\n", n);

	}*/

	/*while (1) {
		n++;
		printf("%d\n", n);
		
		if (n == 10)
			break;  // 실행문이 한줄일 때는 중괄호 {} 생략해도 됨!!
		*/


	 while (1) {
		n++;
		sum += n;
		printf("n=%d\n", n);
		if (sum>100)
			break;
		
	}
	 printf("n=%d\n", n); // 14
	 printf("sum=%d\n", sum);  //105
	return 0;
}