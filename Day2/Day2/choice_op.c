



# include <stdio.h>

int main() {

	// ���� ������ - ���ǽ� ? ��(1) : ����(0)
	int value;
	value = (3 > 4) ? 10 : 20;
	printf("��� �� :  %d\n", value); // 20

	int fatherAge = 35;
	int motherAge = 39;


	printf("%d\n", &fatherAge); // �ּ��� ��(10����)�� ����

	printf("%x\n", &fatherAge); // �ּ��� ��(16����)�� ����


	char ch = (fatherAge > motherAge) ? 'T' : 'F';
	printf("��� �� :  %c\n", ch); // F

	// fatherAge�� motherAge�� �ܺο��� �Է��ϴ� ���, �׶��׶� ������� �޶��� ��





	return 0;

}