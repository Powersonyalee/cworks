# include <stdio.h>
# include <windows.h>
# include <time.h>

int main() {
	int i;
	long t, start, end;


	t = time(NULL);

	//long t = time(NULL); //time_t 시간 자료형
	
	printf("%ld초\n", t);  // 1634441633초; 1970.1.1. 자정 이후 현재까지 시간을 초단위로 표시
						   // %d (decimal); %ld (long decimal)

	//1부터 100까지 출력(대기 시간을 도입) - 수행시간 측정
	//Sleep(1000) -> 1초 <window.h> include
	start = time(NULL);


	for (i = 0; i <= 100; i++) {
		printf("%d\n", i);
		Sleep(20); // 0.05초 간격으로...
	}

	end = time(NULL);
	double diff_timer = (double) (end - start); // long -long이라 double로 바꿔줌// 형변환
	printf("수행시간 : %lf초\n", diff_timer);


	return 0;
}
