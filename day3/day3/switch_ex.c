#include <stdio.h>

int main() {
	// 순위에 따라 메달 색을 지정하는 조건무
	int ranking = 2;  // 값이 정해진 경우는 switch가 편함
	char medalColor;

	switch (ranking) {
	case 1:
		medalColor = 'G';
		break;
	case 2:
		medalColor = 'S';
		break;	// 여기서 break주석처리하면,S 대신 출력이 됨....
	case 3:
		medalColor = 'B';
		break;
	default:
		medalColor = 'N';
		break;
	} // switch end
	printf("%d등 메달의 색깔은 %c", ranking, medalColor);
	return 0;
}