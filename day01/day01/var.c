

# include <stdio.h>

main() {
	// 변수선언 - 자료형 변수이름 ;
	int a; // 정수형 변수 a를 선언
	int b;
	int c = -5 ; // 선언과 동시에 초기화 

	// 변수 입력
	a = 7; // 변수이름 = 값(대입); (해석) =는 값을 입력하는 것, == 는 같다는 의미
	b = 6; // 값을 넣어주는 것은 초기화 했다고 말함; 값 대입 안하면 오류
	
	// 자료형의 크기
	printf("int 형 = %dByte\n", sizeof(int)); //4byte = 32bit


	a = a + 1;
	
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("선영이 나이는 %d살이고, 현수나이는 %d살입니다.", a, b);

}



