# include <stdio.h>

int quantity = 2; // �������� - ��ü�� ����
void price(); // ������Ÿ�� 

int main() {

	printf("%d����\n", quantity);
	price();

	return 0;
}



void price() {
	int price = 10000 * quantity;
	printf("%d���Դϴ�.\n", price);
}


