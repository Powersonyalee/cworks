#include <stdio.h>

int main() {

	FILE* fp;
	fopen_s(&fp, "hello.txt", "r");  // fopen_s �� secure �ȰŶ� nowarning �� �ᵵ ��
										//�б��� -"r", "rt" ���

	if (fp == NULL) {//����ó�� �ʼ�
		puts("������ ���� �����ϴ�."); //puts(���ڿ�)
		return -1;
	}

	int ch = 0;
	while ((ch = fgetc(fp)) != EOF) {   //fp�� �ּҰ� 0 ���� �����ϹǷ�, -1�� ���´ٴ°� �����ð� ���ܰ�
		putchar(ch);

	}
	

	/*while (1) {
		int ch = fgetc(fp);//�� ���� ��������
		if (ch == EOF) break; //EOF =-1 END OF FILE

		// putchar(ch); ///�ѹ��� ����ϱ�
		printf("%c", ch);

	}*/
	fclose(fp);


	return 0;
}
