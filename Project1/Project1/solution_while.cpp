#include <stdio.h>
#include "solution.h"

void solution_while()
{
	int cnt = 0;
	int sum = 0;

	while (cnt < 10)
	{
		sum = sum + cnt;
		cnt++;
	}
	printf("%d\n", sum);
	printf("%d\n", cnt);
}