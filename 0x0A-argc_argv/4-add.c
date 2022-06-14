#include <stdio.h>
#include <stdlib.h>

/**
  * main - function that adds positive numbers.
  * @argc: arg count
  * @argv: arg array
  * Return: 0 or 1 if error occurs
  */

int main(int argc, char *argv[])
{
	int i, x, n = 0;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
		{
			if (argv[i][x] < '0' || argv[i][x] > '9')
			{
				printf("Error\n");

				return (1);
			}
		}

		n += atoi(argv[i]);
	}

	printf("%d\n", n);

	return (0);
}
