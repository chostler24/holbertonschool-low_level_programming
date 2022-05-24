#include "main.h"

/**
 * print_sign - prints the sign of a number
 * Return: 1 if >0, 0 if =0, -1 if <0
 * @n: variable
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
}
