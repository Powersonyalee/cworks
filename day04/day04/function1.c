# include <stdio.h>


void sayHello();//������Ÿ�� (���߱�) : <�ڷ��� �Լ��̸�()>
void sayHello2(char lang[]);

int main() {

	sayHello(); // �Լ��� ȣ��
	sayHello2("C++");
	sayHello2("python");
	sayHello2("java");
	return 0;
}

// void�� ��ȯ �ڷᰡ ����.
// function�� return�� ���� ���
void sayHello() { // sayHello ��� �̸��� �Լ� ����
	printf("Hello~ C!\n");
}

void sayHello2(char lang[]) {
	printf("Hello! %s\n", lang);
}