#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}



void print_alphabet(void)
{
char c = 'a';
for(c=c; c <= '{'; c++)
{
	_putchar(char c);
}
return;
}