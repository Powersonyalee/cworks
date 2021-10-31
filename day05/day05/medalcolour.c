#include <stdio.h>
/* //실패한 것 나중에 찾아보기
int main() {

	int ranking = 1;

	char *medalColor ;

	switch(ranking){
		case 1:
			medalColor = 'G';
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
	printf("%d등 메달의 색상은 %s입니다.", ranking, medalColor);




	return 0;
}
*/




int main() {
	int ranking = 2;

	char* medalColor;

	switch (ranking) {
	case 1:
		medalColor = "Gold";
		break;
	case 2:
		medalColor = "Silver";
		break;
	case 3:
		medalColor = "Bronze";
		break;
	default:
		medalColor = "None";
		break;
	}
	printf("%d등의 메달색깔은 %s입니다.", ranking, medalColor);

	return 0;
}