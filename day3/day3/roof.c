#include <stdio.h>

int main() {
	// 1���� n���� ��� - ���ѹݺ���(�ݺ����ǹ�)
	// while ~ if ~ break��
	// while (1)�� true�� while ������ ���ѹݺ�.. cmdâ ctrl +c�� ������Ű��
	// 1���� ���� �� �� ���� 100�� �Ѵ� �ڿ���


	// n=0�϶�, n=1�϶� �ڵ��� �޶�����.
	int n = 0; 
	int sum = 0;
	/*while (1) { 
		n++;
		printf("%d\n", n);

	}*/

	/*while (1) {
		n++;
		printf("%d\n", n);
		
		if (n == 10)
			break;  // ���๮�� ������ ���� �߰�ȣ {} �����ص� ��!!
		*/


	 while (1) {
		n++;
		sum += n;
		printf("n=%d\n", n);
		if (sum>100)
			break;
		
	}
	 printf("n=%d\n", n); // 14
	 printf("sum=%d\n", sum);  //105
	return 0;
}