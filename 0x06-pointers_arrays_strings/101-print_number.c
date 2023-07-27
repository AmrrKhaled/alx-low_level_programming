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
	unsigned int num = n;

	if (n < 0)
	{
	num = -1 * num;
	_putchar('-');
	}
	if ((num / 10) > 0)
	print_number(num / 10);
	_putchar((num % 10) + 48);
}
