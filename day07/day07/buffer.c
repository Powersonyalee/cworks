#include <stdio.h>

int main() {

	int age;
	char name[10];

	printf("���̸� �Է�: ");
	scanf_s("%d", &age);

	printf("�̸��� �Է�: ");
	while (getchar() != '\n');
	gets(name);  //gets, fgets �Լ��� '\n'�� �����ͼ� ������.

	printf("���� : %d", age);
	printf("�̸� : %s", name);

	return 0;
}


