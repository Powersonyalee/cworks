#include <stdio.h>

int main() {

	FILE* fp;
	fopen_s(&fp, "hello.txt", "r");  // fopen_s 는 secure 된거라 nowarning 안 써도 됨
										//읽기모드 -"r", "rt" 사용

	if (fp == NULL) {//예외처리 필수
		puts("파일을 열수 없습니다."); //puts(문자열)
		return -1;
	}

	int ch = 0;
	while ((ch = fgetc(fp)) != EOF) {   //fp의 주소가 0 부터 시작하므로, -1이 나온다는건 가져올게 없단것
		putchar(ch);

	}
	

	/*while (1) {
		int ch = fgetc(fp);//한 문자 가져오기
		if (ch == EOF) break; //EOF =-1 END OF FILE

		// putchar(ch); ///한문자 출력하기
		printf("%c", ch);

	}*/
	fclose(fp);


	return 0;
}
