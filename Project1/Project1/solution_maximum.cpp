#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

void solution_maximum()
{
	int n;
	int *data;

	scanf("%d", &n);
	data = (int*)malloc(sizeof(int) * n);

	int myMax = data[0];
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
		if (myMax < data[i])
		{
			myMax = data[i];
		}
	}
	printf("%d", myMax);
	free(data);
}