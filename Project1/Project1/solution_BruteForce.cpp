#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

//1부터 N까지 약수의 갯수가 홀수인 숫자들의 갯수 출력
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
