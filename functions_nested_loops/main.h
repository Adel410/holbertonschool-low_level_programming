#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}



void print_alphabet(void)
{
char c = 'a';
char d = '{';
while (c != d)
{
char i = _putchar(c);
c++;
}
char i = _putchar('\n');
return;
}
