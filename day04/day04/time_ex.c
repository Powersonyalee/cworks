# include <stdio.h>
# include <windows.h>
# include <time.h>

int main() {
	int i;
	long t, start, end;


	t = time(NULL);

	//long t = time(NULL); //time_t �ð� �ڷ���
	
	printf("%ld��\n", t);  // 1634441633��; 1970.1.1. ���� ���� ������� �ð��� �ʴ����� ǥ��
						   // %d (decimal); %ld (long decimal)

	//1���� 100���� ���(��� �ð��� ����) - ����ð� ����
	//Sleep(1000) -> 1�� <window.h> include
	start = time(NULL);


	for (i = 0; i <= 100; i++) {
		printf("%d\n", i);
		Sleep(20); // 0.05�� ��������...
	}

	end = time(NULL);
	double diff_timer = (double) (end - start); // long -long�̶� double�� �ٲ���// ����ȯ
	printf("����ð� : %lf��\n", diff_timer);


	return 0;
}
