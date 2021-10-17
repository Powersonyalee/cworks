# include <stdio.h>
int main() {
	// 배열의 복사
	char a1[] = "TEN"; // a1[4] 로 만들어줘야 동일한 값 나옴. 즉 '/0'가 포함되어, 끝을 알려줘야함
	char a2[4]; //a1을 저장
	int i;

	// a1을 a2에 저장
	for (i = 0; i < 4; i++) {
		a2[i] = a1[i];
	}
	printf("%s\n", a1);
	printf("%s\n", a2);

	//A1을 A2에 거꾸로 저장
	for (i = 0; i < 4; i++) {
		a2[i] = a1[2-i];
	}
	a2[3] = '\0';
	printf("%s\n", a1);
	printf("%s\n", a2);


	// a[0] =a[2] 'N'
	// a[1] =a[1] 'E'
	// a[2] =a[0] 'T'



	return 0;
}
