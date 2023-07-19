#include "main.h"
#include <stdio.h>

/**
 * print_times_table-function prints nine times the number from 0 to n
 *
 * @n : checks input of the function
*/
void print_times_table(int n)
{
	int i, j, value;

	if (!(n > 15 || n < 0))
	{
	for (i = 0; i <= n; i++)
	{
	putchar(48);
	for (j = 1; j <= n; j++)
	{
	putchar(',');
	putchar(' ');
	value = i * j;
	if (value <= 9)
	putchar(' ');
	if (value <= 99)
	putchar(' ');
	if (value >= 100)
	{
	putchar(value / 100 + '0');
	putchar((value / 10) % 10 + '0');
	}
	else if (value >= 10)
	putchar(value / 10 + '0');
	putchar(value % 10 + '0');
	}
	putchar('\n');
	}
	}
}
