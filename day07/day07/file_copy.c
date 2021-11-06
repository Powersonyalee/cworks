#include <stdio.h>

int main() {

	FILE* fin;
	FILE* fout;

	int ch = 1;


	fopen_s(&fin, "gugudan.txt", "r");
	fopen_s(&fout, "gugudan2.txt", "w");

	if (fin == NULL) {
		puts("파일 열기에 실패했습니다.");
		return -1;
	}

	if (fout == NULL) {
		puts("파일 생성에 실패했습니다.");
		return -1;
	}

	puts("***파일에 데이터 입력***");


	while ((ch = fgetc(fin)) != EOF) {
		fputc(ch, fout);
	}


	/*while (ch != EOF) {
		ch = getc(fin); //파일fin에서 읽어오기
		fputc(ch, fout); //파일 fout에서 쓰기
	}*/
	fclose(fin);
	fclose(fout);

	return 0;
}
