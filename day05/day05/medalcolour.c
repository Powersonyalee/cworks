#include <stdio.h>
//// ���� �ٽ� Ȯ��
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
	printf("%d�� �޴��� ������ %c�Դϴ�.", ranking, medalColor);




	return 0;
}
