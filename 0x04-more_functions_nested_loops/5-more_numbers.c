#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print numbers from 0 - 14 using only _putchar twice
 * 14 times
 * Return: always 0 success
*/
void more_numbers(void)
{
	int count, i;

	for (i = 0; i < 10; i++)
	{
	for (count = 0; count <= 14; count++)
	{
	if (count >= 10)
	_putchar(count / 10 + 48);
	_putchar(count % 10 + 48);
	}
	putchar('\n');
	}
}
