#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * Return: 1 if c is a letter, lowercase or uppercase
 * @c: variable
 */

int _isalpha(int c)
{
while (c >= 65 && c <= 90 && c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
