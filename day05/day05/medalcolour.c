#include <stdio.h>
//// 실패 다시 확인
int main() {

	int ranking = 1;

	char *medalColor ;

	switch(ranking){
		case 1:
			medalColor = 'Gold';
			break;
		case 2:
			medalColor = 'S';
			break;
		case 3:
			medalColor = 'B';
			break;
		default:
			medalColor = 'N';
			break;
	}
	printf("%d등 메달의 색상은 %c입니다.", ranking, medalColor);




	return 0;
}
