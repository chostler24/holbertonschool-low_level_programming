#include "main.h"

/**
  * read_textfile - function that reads text file and prints it to
  * the POSIX stdout.
  * @filename: file name
  * @letters: number of letters
  * Return: number of letters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t re, op, wr;
	char *bf;

	if (filename == NULL)
	{
		return (0);
	}

	bf = malloc(sizeof(char) * letters);

	if (bf == NULL)
	{
		return (0);
	}

	op = open(filename, O_RDONLY);

	if (op == -1)
	{
		return (0);
	}

	re = read(op, bf, letters);

	if (re == -1)
	{
		return (0);
	}

	wr = write(STDOUT_FILENO, bf, re);

	if (wr == -1)
	{
		return (0);
	}

	free(bf);
	close(op);
	return (re);
}
