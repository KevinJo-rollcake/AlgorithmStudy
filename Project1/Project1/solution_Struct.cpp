#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

struct Point {
	int x;
	int y;

	int getSum(){
		return x + y;
	}
};

struct maxMachine { //3���� ����� �����Ѵ�. �� �߰�, ���� �׸��� �� �� ���� ū �� ȣ��
	int data[100];
	int len = 0; //�迭 �������� �� ���� ����Ŵ)
	void insertNumber(int x) {
		data[len++] = x;
	}

	void removeNumber(int x) {
		for (int i = 0; i < len; i++) {
			if (data[i] == x){
				for (int j = i; i < len; j++) {
					data[j] = data[j + 1];
				}

				len--;
				return;
			}
		}
	}
	int getMax() {
		int myMax = data[0];

		for (int i = 1; i < len; i++) {
			if (data[i] > myMax) {
				myMax = data[i];
			}
		}

		return myMax;
	}

};

void solution_Struct(){
	//����ü�� ĸ��ȭ�� �����ϱ� ���� ����.
	//����ü�� Ÿ���� �����ϴ� ��.
	//����ü�� ���� �����͸� �Ѳ����� �Բ� �����Ѵٴ� ���鿡�� ������ ���´�.

	//maxMachine�� �ڷᱸ��
	//struct�� �̿��Ͽ� maxMachine��� �ڷᱸ���� '����'
	//maxMachine�̶�� �ڷᱸ�� m1, m2�� "����"

	//maxMachine <- Ÿ��, struct, class
	//m1, m2 <- ����, �ν��Ͻ�(instance) ��ü, ��ü�� �ִ� ����

	//maxMachine�̶�� struct�� �ν��Ͻ� m1, m2
	Point p;
	p.x = 1;
	p.y = 2;

	printf("1�� 2�� �� : %d\n", p.getSum()); //��, �� �Լ������� getSum�޽�忡 ���ؼ��� ��Ȯ�� �𸥴�

	maxMachine m1, m2;

	m1.insertNumber(10);
	m1.insertNumber(20);
	m1.insertNumber(3);

	printf("10, 20, 3 �� ���� ū ��: %d\n", m1.getMax());
}