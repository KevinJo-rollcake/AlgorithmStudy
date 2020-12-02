#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

const int MAX = 10;

struct CircularQueue { // ����Ȱ��ɷ��� ���
	int data[MAX];
	int f, r; //f�� r�� �迭�� ������ ����� �ٽ� ������ ���ƿ��� ��
	int capacity;
	int numElement;

	void create(int x) {
		capacity = x;
		f = 0;
		r = 0; 
		numElement = 0;
	}

	void push(int x) {
		if (numElement >= capacity) {
			printf("Queue Overlow\n");
		}
		else {
			data[r++] = x;

			r = (r + 1) % MAX;

			numElement++;
		}

	}
	void pop() {
		if (numElement <= 0) {
			printf("Queue underflow\n");
		}
		else {
			data[f++] = 0;

			f = (f + 1) % MAX;
			
			numElement--;
		}
	}
	int front() {
		if (numElement<= 0) {
			return -1;
		}
		else {
			return data[f];
		}

	}

	int size() {// Q ���� �����ϴ� ������ ������ ��ȯ
		return numElement;
	}
};

void Circularqueue() {
	CircularQueue q1;
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
