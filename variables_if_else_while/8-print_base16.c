#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
int n = '0';
char A = 'a';
while (n <= 16);
{
putchar(n + 0);
n++;
}
while (A <= 'f')
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}
