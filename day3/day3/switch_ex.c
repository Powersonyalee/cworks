#include <stdio.h>

int main() {
	// ������ ���� �޴� ���� �����ϴ� ���ǹ�
	int ranking = 2;  // ���� ������ ���� switch�� ����
	char medalColor;

	switch (ranking) {
	case 1:
		medalColor = 'G';
		break;
	case 2:
		medalColor = 'S';
		break;	// ���⼭ break�ּ�ó���ϸ�,S ��� ����� ��....
	case 3:
		medalColor = 'B';
		break;
	default:
		medalColor = 'N';
		break;
	} // switch end
	printf("%d�� �޴��� ������ %c", ranking, medalColor);
	return 0;
}