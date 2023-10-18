#include "main.h"

/**
 * function print_alphabet_10x - print the alphabet 10 times on 10 different lines
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int j = '\n';
	for (j = 1; j <=10; j++)
	{	
	for (c = c; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	}
return;
}
