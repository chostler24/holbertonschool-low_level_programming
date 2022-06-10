#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Sums both TL to BR and TR to BL diagonals of a square array
 * @a: passed in integers
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_tl_br = 0;
	int sum_tr_bl = 0;


	for (i = 0; i < size * size; i = i + size + 1)
	{
		sum_tl_br += a[i];
	}

	for (i = size - 1; i < size * size - 1; i = i + size - 1)
	{
		sum_tr_bl += a[i];
	}

	printf("%d, %d\n", sum_tl_br, sum_tr_bl);
}
