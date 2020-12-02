#include <cstdio> //	= stdio.h
#include <vector>

using namespace std;
// 5 6			 1------2
// 1 2         / |      |
// 1 3        /  |      |
// 1 4       /   3      |
// 2 4      /    |      |
// 4 5     4 ----5      |
// 3 5     ㄴ----------/

//Q1. 정점 X와 Y가 연결이 되어 있는가?
//Q2. 정점 X와 연결이 되어 잇는 모든 정점을 출력하라.

const int MAX = 100;
void AdjacencyList() {
	vector <int> myGraph[MAX];

}