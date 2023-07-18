#include "main.h"
#include <stdio.h>

/**
 * jack_bauer- function prints the time of the all day minute and hours
*/
void jack_bauer(void)
{
	for (int i = 0 ; i <= 23 ; i++)
	{
	for (int j = 0 ; j <= 59 ; j++)
	{
	_putchar((i / 10) + '0');
	_putchar((i % 10) + '0');
	_putchar(':');
	_putchar((j / 10) + '0');
	_putchar((j % 10) + '0');
	_putchar('\n');
	}
	}
}
