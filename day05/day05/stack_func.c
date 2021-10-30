#define MAX 10 // 최대값을 10까지 쓴다는 것
#include <stdio.h>

int top = -1; //stack에 값이 없음을 의미 stack[-1] 은 값이 없다는 의미
int stack[MAX]; // 정수형 배열 크기를 10으로 

void push(int n) { // 넣기 
	top++;  //현재 top이 0으로 증가
	stack[top] = n;
	printf("%d\n", stack[top]);
}

int pop() { // 꺼내기
	if (top < 0) {
		printf("==스택이 비었습니다 ==\n");
		return 9999;
	}
	else {
		return stack[top--];
	}
}

int main() {
	printf("==스택에 자료 넣기 ==\n");
	push(10);
	push(20);
	push(30);

	printf("==스택에 자료 꺼내기 ==\n");
	printf("%d\n", pop()); //30
	printf("%d\n", pop()); //20
	printf("%d\n", pop()); //10
	printf("%d\n", pop()); // 자료없으므로, 0이 나옴; 에러 생길수 있으므로, if else 구문만들기
	return 0;
}
