# include <stdio.h>


void sayHello();//프로토타입 (본뜨기) : <자료형 함수이름()>
void sayHello2(char lang[]);

int main() {

	sayHello(); // 함수를 호출
	sayHello2("C++");
	sayHello2("python");
	sayHello2("java");
	return 0;
}

// void는 반환 자료가 없다.
// function에 return이 없는 경우
void sayHello() { // sayHello 라는 이름의 함수 정의
	printf("Hello~ C!\n");
}

void sayHello2(char lang[]) {
	printf("Hello! %s\n", lang);
}