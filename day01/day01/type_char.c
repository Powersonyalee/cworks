

#include <stdio.h>

int main() {

	// ���� �ڷ���
	char ch = 'a'; // ������ ���� ch�� 'a'�� ����
	printf("%c\n", ch);
	printf("%d\n", ch); // �ƽ�Ű �ڵ尪 a�� 97�̹Ƿ�.. �ڵ尪 97 ����

	printf("char �� = %dByte\n", sizeof(char)); // 1 byte

	ch = 98; // �����Ҷ��� �տ� char ���� �ȵ� => �ڵ尪�� ���ڷ� ����

	printf("%c\n", ch); //b
	printf("%d\n", ch); // 98

	printf("%c\n", ch+1); //c
	

	// �������ڿ��� �ѱ��� �迭�� ǥ��
	//char f[] = "banana"; // �ѱ��ڴ� '', ���ڿ��� ""�� ���Ѵ�.
	char f[16] = "banana"; // [] �ȿ� ���ڰ��� +1 �̻��� (���⼱ 7�̻�) �����... banana + /0��.
	char h[3] = "��"; // 3�ڸ� �̻�...
	char h2[] = "\uD55C"; //�����ڵ�
	char h3[] = "\uAE00"; //�����ڵ�

	printf("%s\n", f);
	printf("%s\n", h);
	printf("%s\n", h2); // ��
	printf("%s\n", h3); // ��


	return 0;
}