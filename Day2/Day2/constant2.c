


// c�� �ٸ� ���α׷� ���� ���� ���� �����ִ� ��

# include <stdio.h>
# define PI 3.1454 
# define MIN_NUM 1
# define MAX_NUM 100
// defien : macro ���(��ó��) => ����� ���� ; int �ؿ���, �������� ���� ����... �׷��� �޸𸮸� �� ����, �� ����


int main() {

	int r = 5;
	float area;
	area = PI * r * r;

	// MIN_NUM = 10; ������ ���� �߻�!! ��ó�� �������� ��� ���������Ƿ�...

	printf("���� ���� : %.2f\n", area);
	printf("�ִ밪 : %d\n", MAX_NUM);
	printf("�ּҰ� : %d\n", MIN_NUM);

	return 0;
}