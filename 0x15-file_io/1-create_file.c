#include "main.h"

/**
  * create_file - function that creates a file.
  * @filename: file name
  * @text_content - string to write to file
  * Return: 1 or -1
  */

int create_file(const char *filename, char *text_content)
{
	int op, wr, bytenum = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[bytenum])
	{
		bytenum++;
	}

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (op == -1)
	{
		return (-1);
	}

	wr = write(op, text_content, bytenum);

	if (wr == -1)
	{
		return (-1);
	}

	close(op);

	return (1);
}
