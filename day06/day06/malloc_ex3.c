# include <stdio.h>
# include <stdlib.h>

int main() {
	//���ĺ� �빮�� 26���� ����
	char* cp;
	int i;
	cp = (char*)malloc(sizeof(char) * 50);

	if (cp == NULL) { // ����ó�� (�ʼ�)
		printf("�����޸� �Ҵ翡 �����߽��ϴ�\n");
		exit(1);//void exit //�������
	} 

		for (i = 0; i < 26; i++) {
			*(cp + i) = 'A' + i;
		}

	// printf("%d\n", i); 26
	*(cp + 26) = '\0';
	printf("%s", cp); //���ڿ� ���

	free(cp);
	return 0;
}

