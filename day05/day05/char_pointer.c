 #include <stdio.h>

int main() {

	char a = 'A';
	printf("%c\n", a); //A 

	char* b; 
	b = &a;  //�ּ�

	printf("������ b�� ����Ű�� ���� %c\n", *b); //A

	*b = 'B'; // ���� ����, a�� ���� ���ÿ� �����
	printf("a�� ���� %c\n", a); //B
	printf("������ b�� ����Ű�� ���� %c\n", *b); //B

	return 0;
}
