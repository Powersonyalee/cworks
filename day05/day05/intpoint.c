
#include <stdio.h>

int main() {

	//������ ������ ���� �� ����
	int data = 11;

	int* ip = &data; //����� ���ÿ� ����

	printf("%x %d\n", &data, data); //data�� �ּ�, ��
	printf("%x %x\n", &ip, ip);		//ip�� �ּ�, data�� �ּ�
	printf("%d %d\n", *ip, data);	//*ip�� ��, data�� ��

	printf("======������ ����========\n");
	printf("%x %d %d\n", &data, data, *ip + 0); // �ּ�, 11, 11
	printf("%x %d %d\n", &data+1, data+1, *ip + 1); //�ּ� , 12,12 // �ּҴ� 4����Ʈ�� ����!!
	printf("%x %d %d\n", &data+3, data+3, *ip + 3); //�ּ� , 13,13 // �ּҴ� 4����Ʈ�� ����!!
	


	return 0;
}
