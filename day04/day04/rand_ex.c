# include <stdio.h>
# include <stdlib.h>
# include <time.h>



int main() {

	int dice, i;

	// rand() �Լ� -<stdlib.h> include
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand()); // c���� rand() ������ ������ ����... 41 18467 6334 

	/*
	srand(5);
	printf("%d\n", rand()); // srand(5) �տ� ������ 54�� ����... ���� seed 5�� �ٲ����
	*/
	srand(time(NULL)); // �ð��� �帣�Ƿ� SEED�� ��� �ٲ�
	printf("%d\n", rand());
	

	// �ֻ��� �����
	/*
	dice = rand() % 6 + 1; //  dice�� 1-6����
	printf("%d\n", dice);*/

	// �ֻ��� 10�� ������

	for (i = 0; i < 10; i++) {
		dice = rand() % 6 + 1;
		printf("�ֻ��� �� : %d\n", dice);
	}
	return 0;
}



