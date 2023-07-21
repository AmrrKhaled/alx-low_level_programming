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
	if (abs(n) < 10)
	_putchar(n % 10 + 48);
	else if (abs(n) < 100)
	{
	_putchar(n / 10 + 48);
	_putchar(n % 10 + 48);
	}
	else if (abs(n) < 1000)
	{
	_putchar(n / 100 + 48);
	_putchar((n / 10) % 10 + 48);
	_putchar(n % 10 + 48);
	}
	else if (abs(n) < 10000)
	{
	_putchar(n / 1000 + 48);
	_putchar((n / 100) % 10 + 48);
	_putchar((n / 10) % 10 + 48);
	_putchar(n % 10 + 48);
	}
}
