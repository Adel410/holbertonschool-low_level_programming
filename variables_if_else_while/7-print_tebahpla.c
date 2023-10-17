#include <stdio.h>
#include <stdlib.h>
/*
 * main - entry point
 * Return: always 0 (success)
 *
 */

int main(void)
{
char Z = '{';
char A = 'a';
while (Z != A)
{
putchar(Z);
Z--;
}
putchar('\n');
return (0);
}
