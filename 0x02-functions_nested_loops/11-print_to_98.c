#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  check the n and print integers from n to 98
 * including n and 98
 *
 * @n: check the input of function
*/
void print_to_98(int n)
{
	int i;

	putchar(n + '0');
	for (i = n + 1; i <= 98; i++)
	{
	putchar(',');
	putchar(' ');
	if (i > 9)
	{
	putchar(i / 10 + '0');
	putchar(i % 10 + '0');
	}
	else
	putchar(i + '0');
	}
}
