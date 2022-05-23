#include <stdio.h>

/**
 * main - prints alphabet in lowercase, except for q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
char abc = 'a';
while (abc <= 'z')
{
if (abc != 'q' && abc != 'e')
{
putchar(abc);
}
++abc;
}
putchar('\n');
return (0);
}
