#include <stdio.h>
#define VER 10 // ġȯ���� �ִ� ��ũ�θ� ����
//#define BIT16 // ġȯ���� ���� ��ũ�θ� ����



int main() {
	int max = 0;

#if VER >= 10
	printf("���� %d�Դϴ�.\n", VER);
#endif 
	printf("\n===============================\n");

#ifdef BIT16
	max = 32767;  // bit16�� ���ǵǾ� �ִٸ� �� ���� ����϶�� ���̹Ƿ�, �ؿ� max�� Ȱ��ȭ �ȵ�
#else 
	max = 2147483647;// bit16�� ���ǵǾ� ���� �ʴٸ�

#endif
	printf("int�� ������ �ִ밪: %d\n", max);

	return 0;
}

