# include <stdio.h>
int main() {

	int a[3];
	int i;
	int sum=0;

	// �� ����
	a[0] = 10;
	a[1] = 20;
	a[2] = 30;

	// ��ü��ȸ(���)
	for (i = 0; i < 3; i++) { //0, 1, 2
		printf("%d\n", a[i]);
	}

	// �޸��� ũ��
	printf("a�迭�� �޸� ũ��� %dbyte\n", sizeof(a));


	// �հ�
	//printf("�հ� : %d\n", a[0]+a[1]+a[2]);
	for (i = 0; i < 3; i++) {
		sum +=  a[i]; // sum = sum +a[i];
		}
	printf("�հ� : %d\n", sum);


	return 0;
}
