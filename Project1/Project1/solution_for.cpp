#include <stdio.h>
#include "solution.h"

void solution_for()
{
	int cnt = 0;
	int sum = 0;

	for (cnt = 0; cnt < 10; cnt++)
	{
		sum = sum + cnt;
	}
	printf("%d\n", sum);
	printf("%d\n", cnt);
}