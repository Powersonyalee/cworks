#include <stdio.h>

int main() {

	FILE* fp;
	FILE* fout;
	char name[30];
	int no, kor, eng, math;

	fopen_s(&fp, "scorelist.txt", "rt");

	if (fp == NULL) {
		puts("������ �� �� �����ϴ�.\n");
		return -1;
	}

	fopen_s(&fout, "scorelist2.txt", "wt");

	if (fout == NULL) {
		puts("������ �� �� �����ϴ�.\n");
		return -1;
	}

	if (fout == NULL) {
		puts("������ �� �� �����ϴ�.\n");
		return -1;
	}

	while (fscanf_s(fp, "%d %s %d %d %d", &no, name, sizeof(name), &kor, &eng, &math) != EOF) {
		fprintf(fout, "%s %d %d %d\n", name, kor, eng, math); //����Ϳ� ����
		fprintf(stdout, "%s %d %d %d\n", name, kor, eng, math); //����Ϳ� ����
}

	fclose(fp);
	fclose(fout);
	return 0;
}