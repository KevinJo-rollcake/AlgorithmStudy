#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

// 5 6			 1------2
// 1 2         / |      |
// 1 3        /  |      |
// 1 4       /   3      |
// 2 4      /    |      |
// 4 5     4 ----5      |
// 3 5     ㄴ----------/

//Q1. 정점 X와 Y가 연결이 되어 있는가?
//Q2. 정점 X와 연결이 되어 잇는 모든 정점을 출력하라.

const int MAX = 10;

bool isConnected(int myGraph[MAX][MAX], int x, int y) {//배열을 인자로 받을땐 그 크기를 지정해줘야한다.
    /*if (myGraph[x][y] == 1) return true;
    else return false;*/

    return myGraph[x][y] == 1 ? true : false;
}

void getAdj(int myGraph[MAX][MAX], int n, int x) {
    for (int i = 1; i <= n; i++) {
        if (myGraph[x][i] == 1) {
            printf("%d ", i);
        }

    }

}

void AdjacencyMatrix(){
    int n, m;  //n:정점의 갯수, m:간선의 갯수
    int myGraph[MAX][MAX] = { 0, };

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b); //a와 b가 연결이 되어 있다.

        myGraph[a][b] = 1;
        myGraph[b][a] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", myGraph[i][j]);
        }
        printf("\n");
    }

    printf("%d\n", isConnected(myGraph, 1, 2));

    getAdj(myGraph, n, 2);
    printf("\n");
}