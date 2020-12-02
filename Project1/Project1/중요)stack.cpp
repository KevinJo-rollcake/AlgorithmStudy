#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

struct Stack {
	int data[100];
	int len = 0;
	int capacity = 0; //�� ������ ��¥ ��¼�µ�?

	void create(int x) {//S�� ũ�⸦ x�� �����Ѵ�.
		capacity = x;
	}

	void push(int x) {//S�� x�� ����
		if (len >= capacity) {
			printf("Stack Overlow\n");
		}
		else {
			data[len++] = x;
		}

	}
	void pop() {// S���� ���� �ϳ��� ����
		if (len <= 0) {
			printf("Stack underflow\n");
		}
		else {
			data[len--] = 0;
		}
	}
	int top() {//S�� ���� ���� �ִ� ���Ҹ� ��ȯ, ���ÿ� �ƹ��͵� ���ٸ� -1 ��ȯ
		if (len <= 0) {
			return -1;
		}
		else {
			return data[len - 1];
		}

	}

	int size() {// S���� �����ϴ� ������ ������ ��ȯ
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

//bracket ������ �ذ��ϴµ� ����
//���� ��ȣ�� ���ÿ� �����ϰ� ������ ���� �ϳ��� pop
//���ÿ� ���� ���� ��� => ¦�� ���� ���� ��ȣ�� �־�.
//���ÿ� ���µ� ���� ��ȣ�� �� ��� => ¦�� ���� ���� ��ȣ�� �־�.
//���õ� ��, �� ���� ��ȣ�� �� => �ùٸ� ��ȣ��.