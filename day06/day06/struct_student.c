

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
	struct Student s1; //객체 변수(힙 영역 사용)
	s1.number = 101; //초기화
	//s1.name ="강하늘" ; // 상수라 할당이 되지 않음 함수로 써야

	strcpy(s1.name, "강하늘"); //  s1.name이 포인터로 나와있음 
							//(의미)s1.name메모리에 복사한다!! 
	//	s1.name은 주소이므로 포인터. 즉 "강하늘" 넣을 수 없음
	s1.weight = 62.3;

	printf("학번 : %d\n", s1.number);
	printf("이름 : %s\n", s1.name );
	printf("몸무게 : %3.1lf\n", s1.weight);


	//s2 만들기
	struct Student s2;

	s2.number = 102;
	strcpy(s2.name, "이선아");
	s2.weight = 99;
	printf("학번 : %d\n", s2.number);
	printf("이름 : %s\n", s2.name);
	printf("몸무게 : %3.1lf\n", s2.weight);



	struct Student s3 = { 103,"이우주",73.5 };
	printf("학번 : %d\n", s3.number);
	printf("이름 : %s\n", s3.name);
	printf("몸무게 : %3.1lf\n", s3.weight);

	return 0;
}

