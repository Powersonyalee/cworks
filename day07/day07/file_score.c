#include <stdio.h>

int main() {


	FILE* fp;
	char name[100];
	int kor, eng, math;
	

	printf("�̸��Է� : \n");
	fscanf_s(stdin, "%s", name, sizeof(name)); 
	//stdin�� ������(�ּ�)�� ���͸� ����Ű�� - �ü���� �����ϴ� ��Ʈ��(stream)
	//Ű����� �Է�

	printf("�������� �Է� : \n");
	fscanf_s(stdin, "%d", &kor);
	printf("�������� �Է� : \n");
	fscanf_s(stdin, "%d", &eng);
	printf("�������� �Է� : \n");
	fscanf_s(stdin, "%d", &math);

	fopen_s(&fp, "score.txt", "w");
	if (fp == NULL) {

		puts("������ ������ �� �����ϴ�.\n");
		return -1;
	}
	
	fprintf(fp, "%s %d %d %3.1lf\n", name, kor, eng,math); //���Ͽ� ����
	fprintf(stdout, "%s %d %d %3.1lf\n", name, kor, eng, math); //����Ϳ� ����

	fclose(fp);
	return 0;
}
