#include "main.h"
/**
 * print_alphabet - print the alphabet using _putchar function
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
char c = 'a';
for (c = c; c <= 'z'; c++)
{
	_putchar(c);
}
_putchar('\n');
return;
}
