#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * print_numbers function prints from 0 to 9
 *
 * Discription: A C program that prrints the numbers
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
