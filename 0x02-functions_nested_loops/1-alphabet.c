#include "main.h"
#include <stdio.h>

/**
 * print_alphabet-  utilizes on the _putchar function to print
 * the alphabet from a-z
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar('\n');
}
