#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Return: Always 0 (success)
 * @n: var
 */

int print_last_digit(int n)
{
int o;
if (n < 0)
{
n = -n;
o = n % 10;
}
if (o < 0)
{
o = -o;
_putchar(o + '0');
}
return (o);
}
