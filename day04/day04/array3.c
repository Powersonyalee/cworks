# include <stdio.h>
int main() {

	int family[3];

	family[0] = 101;
	family[1] = 102;
	family[2] = 103;

	printf("�����̳� ȣ�� �� ��ȣ�� %dȣ�Դϴ�. \n", family[0]);
	printf("�����̳� ȣ�� �� ��ȣ�� %dȣ�Դϴ�. \n", family[1]);
	printf("�Ҿƹ��� �ҸӴ� ȣ�� �� ��ȣ�� %dȣ�Դϴ�. \n", family[2]);


	printf("%x\n", &family[0]); 
	printf("%x\n", family); // ������ �ּҰ� ����. �迭�� �̸��� �迭�� �����ּҿ� �����ϴ�!!
	return 0;
}
