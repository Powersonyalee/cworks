

# include <stdio.h>

int main() {

	// ������ �����ϴ� ���α׷�
	// 90�� �̻� A, 80�� �̻� B, 70�� �̻� C, 60�� �̻� D, 60�� �̸� F
	int score;
	printf("������ �Է��ϼ���: \n");
	scanf_s("%d", &score);


	char ch; //= 'A' �ϸ� �ʱ�ȭ �ϱ�.
	
	if (score < 60) {
		ch= 'F';
		
	}
	else if ( score >= 60 && score < 70) {
		ch = 'D';
	}
	else if (score >= 70 && score < 80) {
		ch = 'C';

	}

	else if (score >= 80 && score < 90) {
		ch = 'B';
	}
	else {
		ch = 'A';
	}
	printf("%c���� �Դϴ�.\n", ch);




	return 0;

}