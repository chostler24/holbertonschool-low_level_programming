#include <stdio.h>

/**
  * main - function that multiplies two numbers.
  * @argc: arg count
  * @argv: arg array
  * Return: 0 or 1 if error occurs
  */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (argv[1] * argv[2]));
	}

	else
	{
		printf("Error");

		return (1);
	}

	return (0);
}
