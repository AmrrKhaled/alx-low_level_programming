#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - print numbers from 0 - 9 using only _putchar twice
 * exucluding 2 and 4
 * Return: always 0 success
*/
void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
	if (x != 2 && x != 4)
	_putchar(48 + x);
	x++;
	}
	_putchar('\n');
}
