#include<stdio.h>
/**
* main - print a text without using printf or puts functions
*
* Return - 1 always sucess
*/

int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
while (*s);
putchar(*s++);
return (1);
}
