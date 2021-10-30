# include <stdio.h>

int quantity = 2; // 전역변수 - 전체에 영향
void price(); // 프로토타입 

int main() {

	printf("%d개에\n", quantity);
	price();

	return 0;
}



void price() {
	int price = 10000 * quantity;
	printf("%d원입니다.\n", price);
}


