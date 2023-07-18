#include "main.h"
#include <stdio.h>

/**
 * times_table-function prints nine times the number from 0 to 9 with increment
*/
void times_table(void)
{
	int i, j, value;

	for (i = 0; i <= 9; i++)
	{
	_putchar(48);
	for (j = 1; j <= 9; j++)
	{
	_putchar(',');
	_putchar(' ');
	value = i * j;
	if (value <= 9)
	_putchar(' ');
	else
	_putchar(value / 10 + '0');
	_putchar(value % 10 + '0');
	}
	_putchar('\n');
	}
}
