#include <stdio.h>

int main() {

	// ���� �ڷ����� ���� // 
	char val1 = -128; // character  ���� => -128~ 127
	printf("%d\n", val1);

	char val2= 128; // character  ���� => -128~ 127
	printf("%d\n", val2); // -128�� ����� ; ����) ������ �ʰ� ��, over flow(��ȯ��..)
	
						  // 128�ְ� ������ shrt�� int�� �ٲٱ�

	unsigned char val3 = 128; // unsigned range is 0-225
	printf("%d\n", val3);


	// int�� �ڷ�
	int iNum = 2147483647; // -21�� ~21��
	printf("%d\n", iNum);
	int iNum2 = 2147483648; // -21�� ~21��
	printf("%d\n", iNum2); // -2147483648�� ����: overflow �̹Ƿ� long �� ����

	//�Ǽ��� ���е� ��
	
	float fNum = 1.1234567; //float �Ҽ� 6�ڸ����� ����
	double dNum = 1.123456789012345;  // double �Ҽ� 15�ڸ� ���� ����

	printf("%f\n", fNum);
	printf("%.15lf\n", dNum);





	return 0;
}