


# include <stdio.h>

int main() {

	// ������ ��ȯ�ϱ�
	int blue = 1;
	int red = 2;
	printf("=========��ȯ�� =========");
	printf("blue=%d, red =%d\n", blue, red);


	// ��ȯó��
	int yellow;
	
	yellow = blue;
	blue = red;
	red = yellow;
	
	printf("=========��ȯ�� =========");
	printf("blue=%d, red =%d\n", blue, red);

	return 0;

}