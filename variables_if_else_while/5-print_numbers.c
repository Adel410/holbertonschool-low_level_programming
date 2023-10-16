#include <stdio.h>
#include <stdlib.h>
/*
 *
 *
 */

int main(void)
{
char c, d;
c = '0';
d = '11';
while (c != d)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
