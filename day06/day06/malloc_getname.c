# include <stdio.h>
# include <stdlib.h>

char* getName();
//char name[20]; //��������

int main() {

	char* name1;
	char* name2;

	name1 = getName();
	name2 = getName();
	printf("Hi, %s\n", name1);
	printf("Hi, %s\n", name2);

	return 0;
}


char* getName() {
	//char name[20]; //��������

	char* name = (char*)malloc(sizeof(char) * 20);

	if (name == NULL) { // ����ó�� (�ʼ�)
		printf("�����޸� �Ҵ翡 �����߽��ϴ�\n");
		exit(1);//void exit //�������
	}

	printf("����� �̸��� �Է��ϼ���: ");
	//printf("%s", name);
	gets(name);

	//free(name) ; ���⼭�� ���־�� �Ѵ�.
	return name;
}


/*  ������ ������ �Ҹ� �ñ⸦ ���α׷� ���� �߿� ������ �� �ִ� ���� �޸� �Ҵ��� �ʿ���
*/