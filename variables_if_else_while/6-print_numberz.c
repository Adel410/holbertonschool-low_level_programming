#include <stdio.h>

/**
 * print_numbers - Print numbers from 0 to 10 using putchar.
 */
int main(void)
{
	for (int i = 0; i <= 10; i++) {
        putchar('0' + i);
    }
    putchar('\n');
return 0;
}
