#include <stdio.h>
#include <stdbool.h>

# define _CRT_SECURT_NO_WARNINGS


int main() {
	// ���� ���� ���α׷�

	//int sw = 1; //����ġ ���� - ����, �ߴ��� ����
	bool sw = true;
	int balance = 0; // �ܰ�
	while (sw) {
		int selNo; // ���ú���
		int money; //����ݺ���
		printf("=================================\n");
		printf("1.���� | 2.��� | 3.�ܰ� | 4. ���� \n");
		printf("=================================\n");
		printf("����> \n");
		scanf_s("%d", &selNo);

		// ����ó��
		// ����
		if (selNo == 1) {
			printf("���ݾ� > ");
			scanf_s("%d", &money);
			balance += money;
		}
		else if (selNo == 2) {
			// ��ݾ��� �ܾ��� �ʰ��ϴ� ��쿡 "�ܾ��� �ʰ��߽��ϴ�. �ٽ� �Է����ּ���."
			while (sw) {
				printf("��ݾ� > ");
				scanf_s("%d", &money);

				if (money > balance) {
					printf("�ܾ��� �ʰ��߽��ϴ�. �ٽ� �Է����ּ���. \n");
				}
			

				else {
					balance -= money;
					printf("����ó�� �Ǿ����ϴ�. \n");
				
					break;
				}
			}
		}

		else if (selNo == 3) {
			printf("�ܰ� = %d ", balance);
		}
		else if (selNo == 4) {
			sw = false; // 1 ->0���� ����
			break;
			;
		}
		else {
			printf("�������� �ʴ� ����Դϴ�.\n");
		}

	} // while ����
	printf("���α׷� ���� "); 
	return 0;
}