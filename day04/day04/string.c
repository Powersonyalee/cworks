# include <stdio.h>
int main() {
	// ���ڿ� �迭 ����� ���
	char fruit1[] = { 'a','p','p','l','e','\0'}; // �ǳ��� '\0' - null �־���� ���� �� ����.
	char fruit2[] = "apple"; // ���� �Ͱ� �����Ѱ�; ���ڿ��� �Է��ϴ� ���
	char name[20]; // ���� 10�ڰ� �ѱ� 20��?

	printf("%s\n", fruit1);
	printf("%s\n", fruit2);

	// �̸��� ����� ����ϱ�
	printf("����� �̸��� �����ΰ���?");
	scanf_s("%s", name, sizeof(name)); // ���ڿ����� �ּҿ����� &�� ���� ���� // ��� sizeof(����) �ֱ�
										// �迭�� ���(���Ĺ���, �迭, �迭�� ũ��)

	printf("����� �̸���%s �̽ñ���\n", name);
	return 0;
}
