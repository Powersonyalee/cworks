#include <stdio.h>

int main() {
	// ��ø for ��
	int i, j;

	/*for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("��");
		}
	
		printf("\n"); // ���� �� �� �ٲ�

	}

	//1��(i=0)- �� �� �� �� ��
	//2��(i=1)- �� �� �� �� ��

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("*");
		}

		printf("\n"); // ���� �� �� �ٲ�

	}

	int dan;
	
	for (dan = 1; dan <= 10; dan++) { //��ü ������


		int i; //iterator
		for (i = 2; i < 10; i++) {
			printf("%d x %d = %d\n", dan, i, (dan * i));
		}
		printf("\n");
	}*/

	// ���� �ﰢ�� ����� �� ���

	for (i = 0; i < 5; i++) {
		for (j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

 /* 
 1��(i=0) - *
 2�� (i=1)- **
 3�� (i=2)- ***
 4�� (i=3)- ****
 5�� (i=4)- *****
 */




	return 0;
}