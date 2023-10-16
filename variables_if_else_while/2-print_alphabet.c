#include <stdio.h>
#include <stdlib.h>
/*
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
char c, d;
c = 'a';
d = '{';
while (c != d)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}

