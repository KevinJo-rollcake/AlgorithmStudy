#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

struct Queue {
	int data[10];
	int f, r;
	int capacity;

	void create(int x) {//Q�� ũ�⸦ x�� �����Ѵ�.
		capacity = x;
		f = 0;
		r = 0; //�� r-f�� ��¼�°� ����
	}

	void push(int x) {//Q�� x�� ����
		if (r-f >= capacity) {
			printf("Queue Overlow\n");
		}
		else {
			data[r++] = x;
		}

	}
	void pop() {// Q���� ���� �ϳ��� ����
		if (r-f <= 0) {
			printf("Queue underflow\n");
		}
		else {
			data[f++] = 0;
		}
	}
	int front() {//Q�� ���� �տ� �ִ� ���Ҹ� ��ȯ, ť�� �ƹ��͵� ���ٸ� -1 ��ȯ
		if (r-f <= 0) {
			return -1;
		}
		else {
			return data[f];
		}

	}

	int size() {// Q ���� �����ϴ� ������ ������ ��ȯ
		return f - r;
	}
};

void queue() {
	Queue q1;
	q1.create(5);

	q1.push(3);
	q1.push(2);
	q1.push(6);
	q1.push(1);

	printf("%d\n", q1.front());

	q1.pop();

	printf("%d\n", q1.front());
	q1.push(1);
	q1.push(1);
	q1.push(1);

	q1.pop();
	q1.pop();
	q1.pop();
	q1.pop();
	q1.pop();
	q1.pop();
}
