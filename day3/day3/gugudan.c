#include <stdio.h>

int main() {
	// ������ �Ѱ� �� ����ϱ� - ���� �Է¹ޱ�

	int dan ;
		/*printf("���� �Է��ϼ���:\n");
		scanf_s("%d", &dan);*/

	for (dan = 1; dan <= 10; dan++) {


	int i; //iterator
		for (i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, (dan * i));
		}
}

	return 0;
}