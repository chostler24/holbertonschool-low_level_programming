#include "main.h"

/**
  * append_text_to_file - function that appends text at end of file.
  * @filename: file name
  * @text_content: string to add to file
  * Return: 1 or -1
  */

int append_text_to_file(const char *filename, char *text_content)
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

	op = open(filename, O_RDWR | O_APPEND);

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
