# include <stdio.h>
int main() {

	int a[3];
	int i;
	int sum=0;

	// 값 저장
	a[0] = 10;
	a[1] = 20;
	a[2] = 30;

	//배열의 주소
	printf("%x %x %x \n", &a[0], &a[1], &a[2]); // 16진수로 4 바이트씩 올라감...
	printf("%x %x %x \n", a, a+1, a+2); // 동일한 이름이 나온다. 배열의 이름을 입력해도 동일

	// 전체조회(출력)
	for (i = 0; i < 3; i++) { //0, 1, 2
		printf("%d\n", a[i]);
	}

	// 메모리의 크기
	printf("a배열의 메모리 크기는 %dbyte\n", sizeof(a));


	// 합계
	//printf("합계 : %d\n", a[0]+a[1]+a[2]);
	for (i = 0; i < 3; i++) {
		sum +=  a[i]; // sum = sum +a[i];
		}
	printf("합계 : %d\n", sum);


	return 0;
}
