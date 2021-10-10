

#include <stdio.h>

int main() {

	// 문자 자료형
	char ch = 'a'; // 문자형 변수 ch에 'a'를 저장
	printf("%c\n", ch);
	printf("%d\n", ch); // 아스키 코드값 a는 97이므로.. 코드값 97 나옴

	printf("char 형 = %dByte\n", sizeof(char)); // 1 byte

	ch = 98; // 수정할때는 앞에 char 쓰면 안됨 => 코드값을 문자로 산출

	printf("%c\n", ch); //b
	printf("%d\n", ch); // 98

	printf("%c\n", ch+1); //c
	

	// 영문문자열과 한글으 배열로 표현
	//char f[] = "banana"; // 한글자는 '', 문자열으 ""로 감싼다.
	char f[16] = "banana"; // [] 안에 문자개수 +1 이상을 (여기선 7이상) 써야함... banana + /0임.
	char h[3] = "가"; // 3자리 이상...
	char h2[] = "\uD55C"; //유니코드
	char h3[] = "\uAE00"; //유니코드

	printf("%s\n", f);
	printf("%s\n", h);
	printf("%s\n", h2); // 한
	printf("%s\n", h3); // 글


	return 0;
}