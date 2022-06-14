#include <stdio.h>

/**
  * main - function that prints its name, followed by a new line.
  * @argc: number of arguments
  * @argv: argument vector
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
