/*#include <stdio.h>

int main() {
	

	FILE* fout;
	
	fopen_s(&fout, "HELLO2.txt", "a"); // 'a' => 추가 쓸때 사용
	//파일쓰기 

	if (fout == NULL) {//예외처리 필수
		puts("파일을 생성할 수 없습니다."); //puts(문자열)
		return -1;  //exit(-1) 
	}	
	
	//fprintf(fout, "안녕하십쇼~~\n");
	fprintf(fout, "좋으하루되십쇼~~\n");

	fclose(fout); //파일 종료

	return 0;
}*/
