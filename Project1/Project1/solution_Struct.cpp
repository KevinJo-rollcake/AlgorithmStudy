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

struct maxMachine { //3가지 기능을 수핸한다. 값 추가, 삭제 그리고 그 중 제일 큰 값 호출
	int data[100];
	int len = 0; //배열 데이터의 맨 끝을 가리킴)
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
	//구조체는 캡슐화를 구현하기 위한 문법.
	//구조체는 타입을 정의하는 것.
	//구조체는 여러 데이터를 한꺼번에 함께 저장한다는 측면에서 장점을 갖는다.

	//maxMachine도 자료구조
	//struct를 이용하여 maxMachine라는 자료구조를 '정의'
	//maxMachine이라는 자료구조 m1, m2를 "선언"

	//maxMachine <- 타입, struct, class
	//m1, m2 <- 변수, 인스턴스(instance) 개체, 실체가 있는 뭔가

	//maxMachine이라는 struct의 인스턴스 m1, m2
	Point p;
	p.x = 1;
	p.y = 2;

	printf("1과 2의 합 : %d\n", p.getSum()); //단, 이 함수에서는 getSum메쏘드에 대해서는 정확히 모른다

	maxMachine m1, m2;

	m1.insertNumber(10);
	m1.insertNumber(20);
	m1.insertNumber(3);

	printf("10, 20, 3 중 가장 큰 값: %d\n", m1.getMax());
}