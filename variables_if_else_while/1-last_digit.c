#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int n, dernier_c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dernier_c = n % 10;
	/* your code goes there */
if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, dernier_c);
}
else if (n > 5 && n != 0)
{
printf("Last digit of %d is %d and is greater than 5\n", n, dernier_c);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dernier_c);
}
return (0);
}