#include "main.h"
#include <stdio.h>

/**
 * times_table-function prints nine times the number from 0 to 9 with increment
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	if (j > 0)
	{
	_putchar(',');
	_putchar(' ');
	}
	int value = i * j;

	if (value < 10)
	_putchar(' ');
	if (value < 10)
	{
	_putchar(' ');
	_putchar(value + '0');
	}
	else
	{
	_putchar(value / 10 + '0');
	_putchar('.');
	_putchar(value % 10 + '0');
	}
	}
	_putchar('\n');
	}
}
