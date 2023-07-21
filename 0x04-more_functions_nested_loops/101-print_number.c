#include "main.h"
#include <stdlib.h>
/**
 * print_number -takes input n from the user the print it again using
 * only putchar
 *
 * @n: checks the input of the function
 */
void print_number(int n)
{
	if (n < 0)
	{
	n = -1 * n;
	_putchar('-');
	}
	if ((n / 10) > 0)
	print_number(n / 10);
	_putchar((n % 10) + 48);
}
