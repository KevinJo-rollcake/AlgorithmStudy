#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

//1���� N���� ����� ������ Ȧ���� ���ڵ��� ���� ���
void solution_BruteForce()
{
	int n;
	int answer = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				cnt++;
			}
		}
		if (cnt % 2 == 1)
		{
			answer++;
		}
	}
	printf("%d\n", answer);
}
