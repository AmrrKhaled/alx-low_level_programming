#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10-  utilizes on the _putchar function to print
 * the alphabet from a-z 10 times
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar('\n');

}
}
