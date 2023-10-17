#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
int seize = '0';
char A = 'a';
while (seize <= 16)
{
putchar(seize + '0');
seize++;
}
while (A <= 'f')
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}
