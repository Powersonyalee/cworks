

# include <stdio.h> 

int main() {

	// ������ ���; x(�Է°�) -> x*x

	// int x = 4;
	// printf("%d\n", x * x);

	int x, n1, n2;
	
	printf("���ڸ� �Է��� �ּ���:  ");
	scanf_s("%d", &x); 
	printf("%d\n", x*x);
	printf("x�� �ּҰ� : 0x%x\n", &x);

	// �� ���� �� ���ϱ�
	printf("�� ���� ���ڸ� �Է��� �ּ���:  ");
	scanf_s("%d %d", &n1, &n2);
	printf("%d\n", n1-n2);
	//printf("n1�� �ּҰ� : 0x%x\n", &n1);
	//printf("n2�� �ּҰ� : 0x%x\n", &n2);

	return 0;

}