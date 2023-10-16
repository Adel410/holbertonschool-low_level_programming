#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
char c, d, e, f;
c = 'a';
d = '{';
e = 'A';
f = '[';
while (c != d)
{
putchar(c);
c++;
}
while (e != f)
{
putchar(e);
e++;
}
putchar('\n');
return (0);
}
