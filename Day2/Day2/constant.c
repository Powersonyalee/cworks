


#include <stdio.h>

int main() {


	// ��� -const // ����� �빮�ڷ� ǥ��(����)
	int min_num = 1;
	const int MAX_NUM = 100;
	const float PI = 3.1415;// ��� PI�� 3.1415�� ������
	int radius = 5;
	float area;

	min_num = 1000;
	
	// max_num= 1000;���� �߻� ; ����� ������ �� ���� ex) pi =3.14 ������ ������ϵ���

	printf("%d\n", min_num);
	printf("%d\n", MAX_NUM);
	printf("%d\n", MAX_NUM);


	// ���� ���� ����ϱ�: pi * ������ * ������
	area = PI * radius * radius;
	printf("���� ���� : %.2f\n", area);



	return 0;

}