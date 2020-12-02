#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

// 5 6			 1------2
// 1 2         / |      |
// 1 3        /  |      |
// 1 4       /   3      |
// 2 4      /    |      |
// 4 5     4 ----5      |
// 3 5     ��----------/

//Q1. ���� X�� Y�� ������ �Ǿ� �ִ°�?
//Q2. ���� X�� ������ �Ǿ� �մ� ��� ������ ����϶�.

const int MAX = 10;

bool isConnected(int myGraph[MAX][MAX], int x, int y) {//�迭�� ���ڷ� ������ �� ũ�⸦ ����������Ѵ�.
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
    int n, m;  //n:������ ����, m:������ ����
    int myGraph[MAX][MAX] = { 0, };

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b); //a�� b�� ������ �Ǿ� �ִ�.

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