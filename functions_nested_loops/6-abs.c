#include "main.h"

/**
 * _abs - entry point
 * @c: argument
 * Return: always 0 (succes)
 */

int _abs(int c)
{
	if (c < 0)
	{
		return(-c);
	}
	else
	{
		return(c);
	}
}
