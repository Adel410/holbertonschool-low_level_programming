#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Print numbers from 0 to 10 using putchar.
 */
int main(void)
{
int n = 0;	
while (n <= 9)
{
putchar('0' + n);
n++;
}
putchar('\n');
return 0;
}
