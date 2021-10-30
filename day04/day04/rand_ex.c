# include <stdio.h>
# include <stdlib.h>
# include <time.h>



int main() {

	int dice, i;

	// rand() 함수 -<stdlib.h> include
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand()); // c언어는 rand() 순서가 정해져 있음... 41 18467 6334 

	/*
	srand(5);
	printf("%d\n", rand()); // srand(5) 앞에 넣으면 54로 나옴... 따라서 seed 5를 바꿔줘야
	*/
	srand(time(NULL)); // 시간이 흐르므로 SEED가 계속 바뀜
	printf("%d\n", rand());
	

	// 주사위 만들기
	/*
	dice = rand() % 6 + 1; //  dice에 1-6생성
	printf("%d\n", dice);*/

	// 주사위 10번 던지기

	for (i = 0; i < 10; i++) {
		dice = rand() % 6 + 1;
		printf("주사위 눈 : %d\n", dice);
	}
	return 0;
}



