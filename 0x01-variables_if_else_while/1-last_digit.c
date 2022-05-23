#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - randomizes int n
 * Return: Always 0 (Success0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d Last digit of", n);
printf("%d n", n);
printf("%d is", n);
if (n > 5);
printf("%d and is greater than 5", n);
else if (n == 0);
printf("%d and is 0", n);
else if (n < 6, n =/= 0)
printf("%d and is less than 6 and not 0", n);
return (0);
}
