
#include <stdio.h>

int main() {

	char ch = 'J';
	int iNum = 11;


	char* cp; //������ ������ cp����
	int* ip; // ������ ������ ip����

	cp = &ch; //�����Ϳ� ch�� �ּ� ����
	ip = &iNum;  // �����Ϳ� iNum�� �ּ� ����


	printf("%x %c \n", cp, *cp); //cp�� �ּ�; *cp�� �ּҿ� �ִ� ��
	printf("%d %d\n", sizeof(ch), sizeof(cp)); //1byte , 4byte
	//����Ʈ �ڷ����� ũ��� ��� 4byte �̴�.

	printf("%x %d \n", ip, *ip); //ip�� ���尪, *ip�� �� ���
	printf("%d %d\n", sizeof(iNum), sizeof(ip)); 4byte, 4byte

	return 0;
}