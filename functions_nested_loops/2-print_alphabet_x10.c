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
	for (c = c; c <= 'z'; c++)
	{
		_putchar(c);
		for (f = 1; f <= 10; f++)
		{
			_putchar(f);
		}
	}
	
return;
}
