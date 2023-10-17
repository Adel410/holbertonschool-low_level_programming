#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main (void)
{
int n = 0;
while (n != 10)
{
putchar(n + '0');
putchar(',');
putchar(' ');
n++;
if (n > 9)
{
break;
}
}
putchar('\n');
return (0);
}
