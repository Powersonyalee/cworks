# include <stdio.h>
int main() {
	int arr[] = { 10,20,30,40 }; // ó������ �ʱ�ȭ �ϴ� ��� : ���2
	int i;
	int sum = 0;

	// 30�� ���
	printf(" a[2] = %d\n", arr[2]); // indexing �ϴ� ��

	// ��ü ���
	for (i = 0; i < 4; i++) {
		printf(" %3d", arr[i]);
	}

	for (i = 0; i < 4; i++) {
		sum += arr[i]; // ���� ���ϱ�
	}

	printf("\n�հ� : %d", sum);

	return 0;
}
