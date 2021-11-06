/* # include <stdio.h>

int main() {
	
	FILE* fout;
	int i, j;

	fopen_s(&fout, "gugudan.txt", "w"); // 'a' => 추가 쓸때 사용
	//파일쓰기

	if (fout == NULL) {//예외처리 필수
		puts("파일을 생성할 수 없습니다."); //puts(문자열)
		return -1;  //exit(-1)
	}

	//구구단 쓰기
	
	for (i = 2; i < 10; i++) {
		for (j=1; j<10;j++){
			fprintf(fout, "%d 곱하기 %d = %d\n", i, j, (i * j));
		}
		fprintf(fout, "\n"); // 문자열로 표기시, '\n'사용안함 주의!
	}
	fclose(fout);

	return 0;
}*/