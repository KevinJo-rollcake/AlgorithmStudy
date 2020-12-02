#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

struct Stack {
	int data[100];
	int len = 0;
	int capacity = 0; //이 개념이 진짜 개쩌는듯?

	void create(int x) {//S의 크기를 x로 지정한다.
		capacity = x;
	}

	void push(int x) {//S에 x를 삽입
		if (len >= capacity) {
			printf("Stack Overlow\n");
		}
		else {
			data[len++] = x;
		}

	}
	void pop() {// S에서 원소 하나를 제거
		if (len <= 0) {
			printf("Stack underflow\n");
		}
		else {
			data[len--] = 0;
		}
	}
	int top() {//S의 가장 위에 있는 원소를 반환, 스택에 아무것도 없다면 -1 반환
		if (len <= 0) {
			return -1;
		}
		else {
			return data[len - 1];
		}

	}

	int size() {// S내에 존재하는 원소의 갯수를 반환
		return len;
	}
};

void stack() {
	Stack s1;
	s1.create(5);

	s1.push(3);
	s1.push(2);
	s1.push(6);
	s1.push(1);
	
	printf("%d\n", s1.top());

	s1.pop();

	printf("%d\n", s1.top());
}

//bracket 문제를 해결하는데 좋다
//열린 괄호를 스택에 저장하고 닫힐때 마다 하나씩 pop
//스택에 남아 있을 경우 => 짝이 없는 여는 괄호가 있어.
//스택에 없는데 닫힌 괄호가 올 경우 => 짝이 없는 닫힌 괄호가 있어.
//스택도 끝, 그 들어올 괄호도 끝 => 올바른 괄호다.