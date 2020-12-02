#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

void solution_array()
{
	int n;
	int data[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", data[i]);
	}
}