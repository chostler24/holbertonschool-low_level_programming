#include <stdio.h>
#include <stdlib.h>

/**
  * main - function that multiplies two numbers.
  * @argc: arg count
  * @argv: arg array
  * Return: 0 or 1 if error occurs
  */

int main(int argc, char *argv[])
{
	int i;

	int x;

	i = atoi(argv[1]);

	x = atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", i * x);

	}

	else
	{
		printf("Error");

		return (1);
	}

	return (0);
}
