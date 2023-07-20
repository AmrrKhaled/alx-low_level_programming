#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print numbers from 0 - 9 using only _putchar twice
 *
 * Return: always 0 success
*/
void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
	if (x != 1 && x != 2)
	_putchar(48 + x);
	x++;
	}
	_putchar('\n');
}
