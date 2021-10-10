
# include <stdio.h>
//전처리기;컴파일 수행(0,1로 바꾸기) 전에 먼저처리

int main() { // 메인 함수(프로그램 시작점)

	printf("Hello~ C!\n"); // stdio.h(standard input and output)에서 연결함
	printf("안녕~ c!\n");

	//printf("대응 서식문자 ", 문자(변수))
	//printf("출력형식", 출력데이터)



	printf("%d", 4); // 숫자 4를 출력
	printf("%d\n", 4 + 10);
	printf("정수 : %d\n", 4 + 10);// 정부 4를 출력
	printf("실수 : %f\n", 2.53); // 실수 2.53을 출력 , 소수 6자리까지
	printf("실수 : %.2f\n\a", 2.53); // 실수 2.53을 출력 , 소수 2자리까지


	printf("문자 : %c\n", 'k'); // 1개 문자 - 홑따옴표

	return 0; // 운영체제로 0을 반환해서 프로그램을 종료한다.
}