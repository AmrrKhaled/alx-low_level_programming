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
	int x = 0;

	while (x < 10)
	{
	putchar(48 + x);
	x++;
	}
	putchar('\n');
	return (0);
}
