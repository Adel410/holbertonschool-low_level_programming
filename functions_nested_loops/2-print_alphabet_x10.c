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
	for (i = 1; i <=10; i++)
	{	
	for (c = c; c <= 'z'; c++)
	{
		_putchar(c);
	}
	}
return;
}
