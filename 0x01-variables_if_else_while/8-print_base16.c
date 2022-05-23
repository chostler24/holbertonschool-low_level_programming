#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
char abc;
for (n = 48; n < 58; ++n)
{
putchar(n);
}
for (abc = 'a'; abc <= 'f'; ++abc)
{
putchar(abc);
}
putchar('\n');
return (0);
}
