#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: A C program that prints the number is positive or negative
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int x, y, z;

	for (x = 48; x < 58 ; x++)
	{
	for (y = x + 1; y < 58 ; y++)
	{
	for (z = y + 1; z < 58 ; z++)
	{
	putchar(x);
	putchar(y);
	putchar(z);
	if (!(x == 55 && y == 56 && z == 57))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

