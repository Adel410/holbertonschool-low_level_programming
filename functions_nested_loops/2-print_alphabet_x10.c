#include "main.h"

/**
 * print_alphabet_10x - print the alphabet 10 times on 10 different lines
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	char f = '\n';
	for (f = 1; f <= 10; f++)
	{
	for (c = c; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
return;
}
