# include <stdio.h>
int main() {
	// 문자열 배열 선언과 사용
	char fruit1[] = { 'a','p','p','l','e','\0'}; // 맨끝에 '\0' - null 넣어줘야 에러 안 나옴.
	char fruit2[] = "apple"; // 위에 것과 동일한것; 문자열로 입력하는 방식
	char name[20]; // 영어 10자가 한글 20자?

	printf("%s\n", fruit1);
	printf("%s\n", fruit2);

	// 이름을 물어볼때 사용하기
	printf("당신의 이름은 무엇인가요?");
	scanf_s("%s", name, sizeof(name)); // 문자열에는 주소연산자 &를 넣지 않음 // 대신 sizeof(변수) 넣기
										// 배열의 경우(서식문자, 배열, 배열의 크기)

	printf("당신의 이름은%s 이시군욥\n", name);
	return 0;
}
