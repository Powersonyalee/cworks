/*
# define _CRT_SECURE_NO_WARNINGS 
# include <stdio.h>
# include <string.h>

//struct ����ü �ڷ��� ����
struct Student {
	int number; //��ȣ(�������; �ʱ�ȭ ���� �ʰ� ����.. => heap�޸� ����) 
	char name[20]; //�̸�
	double weight; //������
};

int main() {
	int i;	

	struct Student s[3] = {
		{101,"���ϴ�",50.2},
		{102,"������", 70.1},
		{103, "���ζ�",60.8}
	};
	

	


	for (i = 0; i < 3; i++) {
	printf("�й� : %d\n", s[i].number);
	printf("�̸� : %s\n", s[i].name);
	printf("������ : %3.1lf\n", s[i].weight);
	printf("\n");
	}

	return 0;
}

*/