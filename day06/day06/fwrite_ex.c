# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


int main() {

	FILE* fp; //���� ��Ʈ�� ����
	fp = fopen("hello.txt", "w"); //w - ������

	fputs("hello",fp); //������ �Է� puts�� s�� string

	fclose(fp);		   //���ϴݱ�
 

	return 0;
}

