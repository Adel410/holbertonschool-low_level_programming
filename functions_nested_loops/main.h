#include <unistd.h>
int _putchar(int c)
{
	return (write(1, &c, 1));
}



void print_alphabet(void)
{
_putchar("abcdefghijklmnopqrstuvwxyz");
return;
}
