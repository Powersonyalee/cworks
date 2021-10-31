# include <stdio.h>
# include <stdlib.h>

char* getName();
//char name[20]; //전역변수

int main() {

	char* name1;
	char* name2;

	name1 = getName();
	name2 = getName();
	printf("Hi, %s\n", name1);
	printf("Hi, %s\n", name2);

	return 0;
}


char* getName() {
	//char name[20]; //지역변수

	char* name = (char*)malloc(sizeof(char) * 20);

	if (name == NULL) { // 에러처리 (필수)
		printf("동적메모리 할당에 실패했습니다\n");
		exit(1);//void exit //즉시종료
	}

	printf("당신의 이름을 입력하세요: ");
	//printf("%s", name);
	gets(name);

	//free(name) ; 여기서는 빼주어야 한다.
	return name;
}


/*  변수의 생성과 소멸 시기를 프로그램 실행 중에 설정할 수 있는 동적 메모리 할당이 필요함
*/