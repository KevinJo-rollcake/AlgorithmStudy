#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

/*
모든 경우의 수를 시도해보드는 코드를 짜기 까다로운 경우
N개의 카드가 있고, 각각은 1부터 N까지의 번호를 갖는다. 이를 한 줄로 세울 수 있는 모든 경우를 출력하라

제시된 예제 (N=3)
for (int i=1;i<=3;i++){
	for (int j=1;j<=2;j++){
		for (int k=1;k<=1;k++){
			if (i!=j && j !=k && i !=k){
				printf(%d %d %d\n",i,j,k);
			}
		}
	}
}

.....
N이 10개면 for 10개? 그러므로 재귀 호출을 이용해야한다!!!!
*/

/*
void AdBruteForce()
{
	int n;
	
	scanf("%d", &n);

	int *arr;
	arr=(int*)malloc(sizeof(int) * n);

	getResult(0, n, arr); //n은 몇중 포문인가 arr은 123 321 이렇게 그 값들을 나열하는 숫자
}

void getResult(int current, int n, int result[])
{
	if (current >= n) {
		printf(result);
	}
	else {
		for (int i = 1; i <= n; i++) {
			if(isNotContaining) //reslut 안에 i가 있는지 없는지 검사
			result[current] = i; //이 i를 current에 넣고 그 다음 for문을 돌린다
			getResult(current + 1, n, result); // 그리고 그 다음 자리로 이동해서 i를 넣어본다.
			result[current] = 0; //초기화, 어차피 for문을 돌면서 해당 포지션의 값은 바뀐다.+
		}
	}
}
*/

//순열 구하기, N개의 알파벳 중에서 R개를 나열할 수 있는 경우의 수
#define MAX 27
int n, r;
char result[MAX];
bool check[MAX];

void getResult(int x) {
	if (x >= r){
		printf("%s\n", result);
	}
	else {
		for (int i = 0; i < n; i++) {
			char alpha = i + 'a'; // 맨 처음, 첫자리를 a로 한다음, 그 뒤에 올 수 있는 알파벳 체크
			// 그리고 한바퀴를 다 돌게되면 이제 그 다음은 'b'
			if (check[i] == false) {
				result[x] = alpha;
				check[i] = true;

				getResult(x + 1);

				check[i] = false;
				result[x] = 0;
			}
		}
	}
}

void AdBruteForce() {
	scanf("%d %d", &n, &r);

	getResult(0);
}
