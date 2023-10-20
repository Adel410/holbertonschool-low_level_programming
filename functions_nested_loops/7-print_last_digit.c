#include "main.h"
/**
 * print_last_digit - print last digit of an imput's number
 * Return: 0 always success
 */

int print_last_digit(int n)
{
	int d;
	d = n % 10;

	write("%d", d);
	return (0);
}
