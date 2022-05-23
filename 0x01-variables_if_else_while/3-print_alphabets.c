#include <stdio.h>

/**
 * main - prints alphabet in lower case, then in upper case
 * Return: Always 0 (Success)
 */

int main(void)
{
int abc;
for (abc = 'a'; abc <= 'z'; abc++)
putchar(abc);
for (abc = 'A'; abc <= 'Z'; abc++)
putchar(abc);
putchar('\n');
return (0);
}
