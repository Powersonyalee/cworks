#include <stdio.h>
#define ADD(x,y) (x + y) //���ϱ� ��ũ�� �Լ�
#define MULTIPLY(x,y) ((x)*(y))  //���ϱ� ��ũ�� �Լ�

/*int ADD(int a, int b) {
	return a + b;
}*/

int main() {

	int a = 10, b = 20;
	int result;
	
	printf("a+b=%d\n", ADD(a, b));  //add macro���� �Լ��� ȣ���ؼ� ����ϴ°� �ƴ϶�, a+b���ҷ�����
	printf("a*b=%d\n", MULTIPLY(a, b));

	result = 30 / MULTIPLY(2, 5);  // define MUTIPLY (X,Y) X*Y�� �ϸ�, ���� 75= 30/3*5 = ��ȣ�����ÿ���
	printf("result=%d\n", result);   //  MUTIPLY (X,Y) (X*Y)�� �ϸ� result =3

	return 0;
}
