/*
#include <stdio.h>

int main() {



	FILE* fout;
	int i = 0;
	
	fopen_s(&fout, "ASCII.txt", "wt"); // 파일열기
	//파일쓰기 


	if (fout == NULL) {//예외처리 필수
		puts("파일을 생성할 수 없습니다."); //puts(문자열)
		return -1;  //exit(-1)는 사용안함
	}

	puts("*** ASCII 테이블 작성 *** \n");
	for (i = 1; i < 128; i++) {
		if (i % 10 == 0) {
			fputc('\n', fout);  //한글자는 ''
		}
		fputc(i, fout);
		fputc('\t', fout);	
	}

	fclose(fout); //파일 종료
 
	return 0;
}
*/