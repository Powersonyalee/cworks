


# include <stdio.h> 
# define _CRT_SECURE_NO_WARNINGS // 추가하기


int main() {

	int i;
	float f;

	printf("정수 입력 : ");
	scanf_s("%d", &i); // scanf 대신 scanf_s 쓰기.
	printf("%d\n", i);


	printf("실수 입력 : ");
	scanf_s("%f", &f); // scanf 대신 scanf_s 쓰기.
	printf("%f\n", f);



	return 0;

}