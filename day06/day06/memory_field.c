
# include <stdio.h>

int a = 10; // ��������

int main() {

	int num1 = 10, num2 = 20; //��������
	static int s = 30;		  //��������

	printf("�ڵ念��: 0x%p, 0x%p\n", main, printf); //�Լ��� �ڵ念��
	printf("���ÿ���: 0x%p, 0x%p\n", &num1, &num2); //��������
	printf("���ÿ���: 0x%p, 0x%p\n", &a, &s); //��������, ��������

	return 0;
}