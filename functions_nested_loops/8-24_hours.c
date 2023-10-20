#include "main.h"
/**
 * jack_bauer - print every seconds
 * Return: 0 always success
 */

void jack_bauer(void)
{
	int a, z;

	for (a = 0; a < 24; a++)
	{
		for (z = 0; z < 60; z++)
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(z / 10 + '0');
			_putchar(z % 10 + '0');
			_putchar('\n');
	}
return (0);
}
