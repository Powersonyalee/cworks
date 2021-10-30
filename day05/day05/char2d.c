
#include <stdio.h>

int main() {
	// char name[] = "sunny";  - 1차원 배열(개수가 6개) ; /0이 생략되어 있음

	int x;
	char name[4][10] = {
		"sunny", // s, u, n, n, y, '\0'
		"Hyunsoo",
		"soomin",
		"youngsan"
	};
	printf("%x %s\n", &name[0], name[0]); // 주소, 값 출력 fdf83c sunny
	printf("%x %s\n", name, name);		  // fdf83c sunny

	// 전체 출력
	for (x = 0; x < 4; x++) {
		printf("%x %s\n", name[x], name[x]);
	}
	return 0;
}
