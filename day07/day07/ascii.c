/*
#include <stdio.h>

int main() {



	FILE* fout;
	int i = 0;
	
	fopen_s(&fout, "ASCII.txt", "wt"); // ���Ͽ���
	//���Ͼ��� 


	if (fout == NULL) {//����ó�� �ʼ�
		puts("������ ������ �� �����ϴ�."); //puts(���ڿ�)
		return -1;  //exit(-1)�� ������
	}

	puts("*** ASCII ���̺� �ۼ� *** \n");
	for (i = 1; i < 128; i++) {
		if (i % 10 == 0) {
			fputc('\n', fout);  //�ѱ��ڴ� ''
		}
		fputc(i, fout);
		fputc('\t', fout);	
	}

	fclose(fout); //���� ����
 
	return 0;
}
*/