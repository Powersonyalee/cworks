
#include <stdio.h>

int main() {
	// char name[] = "sunny";  - 1���� �迭(������ 6��) ; /0�� �����Ǿ� ����

	int x;
	char name[4][10] = {
		"sunny", // s, u, n, n, y, '\0'
		"Hyunsoo",
		"soomin",
		"youngsan"
	};
	printf("%x %s\n", &name[0], name[0]); // �ּ�, �� ��� fdf83c sunny
	printf("%x %s\n", name, name);		  // fdf83c sunny

	// ��ü ���
	for (x = 0; x < 4; x++) {
		printf("%x %s\n", name[x], name[x]);
	}
	return 0;
}
