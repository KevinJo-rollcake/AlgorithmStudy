#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

struct Queue {
	int data[10];
	int f, r;
	int capacity;

	void create(int x) {//Q의 크기를 x로 지정한다.
		capacity = x;
		f = 0;
		r = 0; //이 r-f가 개쩌는거 같다
	}

	void push(int x) {//Q에 x를 삽입
		if (r-f >= capacity) {
			printf("Queue Overlow\n");
		}
		else {
			data[r++] = x;
		}

	}
	void pop() {// Q에서 원소 하나를 제거
		if (r-f <= 0) {
			printf("Queue underflow\n");
		}
		else {
			data[f++] = 0;
		}
	}
	int front() {//Q의 가장 앞에 있는 원소를 반환, 큐에 아무것도 없다면 -1 반환
		if (r-f <= 0) {
			return -1;
		}
		else {
			return data[f];
		}

	}

	int size() {// Q 내에 존재하는 원소의 갯수를 반환
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
