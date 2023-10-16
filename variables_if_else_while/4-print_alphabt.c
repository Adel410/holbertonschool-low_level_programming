#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */

int main() {
	for (char letter = 'a'; letter <= 'z'; letter++) {
if (letter != 'q' && letter != 'e') {
putchar(letter);
}
}

putchar('\n'); // Add a newline character to separate the output from the prompt.
return 0;
}
