/*
# define _CRT_SECURE_NO_WARNINGS 
# include <stdio.h>
# include <string.h>

//struct 구조체 자료형 정의
struct Student {
	int number; //번호(멤버변수; 초기화 하지 않고 선언만.. => heap메모리 쓴다) 
	char name[20]; //이름
	double weight; //몸무게
};

int main() {
	int i;	

	struct Student s[3] = {
		{101,"강하늘",50.2},
		{102,"서우주", 70.1},
		{103, "오로라",60.8}
	};
	

	


	for (i = 0; i < 3; i++) {
	printf("학번 : %d\n", s[i].number);
	printf("이름 : %s\n", s[i].name);
	printf("몸무게 : %3.1lf\n", s[i].weight);
	printf("\n");
	}

	return 0;
}

*/