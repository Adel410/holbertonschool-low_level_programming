#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
char seize = '0';

while (seize <= 16)
{
putchar(seize);
seize++;
}
putchar('\n');
return (0);
}
