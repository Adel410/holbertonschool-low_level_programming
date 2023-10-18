#include "main.h"

/**
 * function print_alphabet_10x - print the alphabet 10 times on 10 different lines
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i;
	for (c = c; c <= 'z'; c++)
	{
		for (i = 1; 1 <= 10; i++)
		{
			_putchar(c);
			_putchar('\n');
		}
	}
return;
}
