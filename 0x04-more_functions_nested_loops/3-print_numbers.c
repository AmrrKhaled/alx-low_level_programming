#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * print_numbers - print numbers from 0 - 9 using only _putchar twice
 *
 * Return: always 0 success
*/
void print_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
	putchar(48 + x);
	x++;
	}
	putchar('\n');
}
