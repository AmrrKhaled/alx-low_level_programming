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
	int x = 48;

	while (x < 58)
	{
	putchar(x);
	if (x != '9')
	putchar(',');
	putchar(' ');
	x++;
	}
	putchar('\n');
	return (0);
}
