#include<stdio.h>
#include<unistd.h>
/**
* main - print a text without using printf or puts functions
*
* Return: 1 always sucess
*/

int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
