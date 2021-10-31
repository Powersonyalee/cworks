# include <stdio.h>
# include <stdlib.h>

int main() {
	//알파벳 대문자 26개를 저장
	char* cp;
	int i;
	cp = (char*)malloc(sizeof(char) * 50);

	if (cp == NULL) { // 에러처리 (필수)
		printf("동적메모리 할당에 실패했습니다\n");
		exit(1);//void exit //즉시종료
	} 

		for (i = 0; i < 26; i++) {
			*(cp + i) = 'A' + i;
		}

	// printf("%d\n", i); 26
	*(cp + 26) = '\0';
	printf("%s", cp); //문자열 출력

	free(cp);
	return 0;
}

