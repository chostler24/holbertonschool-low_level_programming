#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int h = 0;
int m = 0;
while (h < 24)
{
_putchar((char)h / 10 + '0');
_putchar((char)h % 10 + '0');
_putchar('\n');
}
while (m < 59)
{
_putchar((char)m / 10 + '0');
_putchar((char)m % 10 + '0');
_putchar('\n');
}
}
