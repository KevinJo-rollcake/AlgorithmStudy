#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

/*
��� ����� ���� �õ��غ���� �ڵ带 ¥�� ��ٷο� ���
N���� ī�尡 �ְ�, ������ 1���� N������ ��ȣ�� ���´�. �̸� �� �ٷ� ���� �� �ִ� ��� ��츦 ����϶�

���õ� ���� (N=3)
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
N�� 10���� for 10��? �׷��Ƿ� ��� ȣ���� �̿��ؾ��Ѵ�!!!!
*/

/*
void AdBruteForce()
{
	int n;
	
	scanf("%d", &n);

	int *arr;
	arr=(int*)malloc(sizeof(int) * n);

	getResult(0, n, arr); //n�� ���� �����ΰ� arr�� 123 321 �̷��� �� ������ �����ϴ� ����
}

void getResult(int current, int n, int result[])
{
	if (current >= n) {
		printf(result);
	}
	else {
		for (int i = 1; i <= n; i++) {
			if(isNotContaining) //reslut �ȿ� i�� �ִ��� ������ �˻�
			result[current] = i; //�� i�� current�� �ְ� �� ���� for���� ������
			getResult(current + 1, n, result); // �׸��� �� ���� �ڸ��� �̵��ؼ� i�� �־��.
			result[current] = 0; //�ʱ�ȭ, ������ for���� ���鼭 �ش� �������� ���� �ٲ��.+
		}
	}
}
*/

//���� ���ϱ�, N���� ���ĺ� �߿��� R���� ������ �� �ִ� ����� ��
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
			char alpha = i + 'a'; // �� ó��, ù�ڸ��� a�� �Ѵ���, �� �ڿ� �� �� �ִ� ���ĺ� üũ
			// �׸��� �ѹ����� �� ���ԵǸ� ���� �� ������ 'b'
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
