#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
char letter = 'a';
char exclude = 'q';
char exclude1 = 'e';
while (letter <= 'z')
{
if (letter != exclude && letter != exclude1)
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
