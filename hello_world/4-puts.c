#include<stdio.h>
/**
 * main - Entry point
 * Description : 'print a string without using the printf method'
 * Return: Always 0 (Success)
 */

int main(void)
{
char str[] = "\"Programming is like building a multilingual puzzle\n";
puts(str);
fprintf(stderr, '...');
return (0);
}
