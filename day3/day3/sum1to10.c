


#include <stdio.h>

int main() {

	// 1 ���� n���� ���ϱ�
	int n = 0; // �ݺ�Ƚ��
	int sum = 0; // �հ踦 ������ ����
	

	while (n <= 10) {
		sum = sum + n;
		printf("n=%d, sum=%d\n", n, sum);
		n=n+1;
			}
		printf("sum=%d\n", sum);
/* n = n + 1;	// 1(sum)
	n += n ;	// 3
	n += n ;  //6
	n += n ; //10 
	*/


	return 0;
}