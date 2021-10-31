# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


int main() {

	FILE* fp; //파일 스트림 생성
	fp = fopen("hello.txt", "w"); //w - 쓰기모드

	fputs("hello",fp); //데이터 입력 puts의 s는 string

	fclose(fp);		   //파일닫기
 

	return 0;
}

