#include <stdio.h>
#define PI 3.14  // ��ũ�� ���

int main() {
	
	//const int PI = 3.14; //const�� ���� �޸� �Ҵ�Ǽ�, �ؿ��� ������ �ȵ�
	//PI = 3.66; ����� ����Ұ�

	// ���� ���̿� �ѷ��� ���
	int radius;				//������
	double area, circum;	//����, �ѷ�

	puts("�������� �Է��ϼ��� : ");
	scanf_s("%d", &radius);

	//���� ���� = PI * ������ * ������
	area = PI * radius * radius;
	printf("���� ����: %.2lf", area);


	//���� �ѷ� =2*PI*radius
	circum = 2 * PI * radius;
	printf("���� �ѷ�: %.2lf", circum);

	return 0;
}
