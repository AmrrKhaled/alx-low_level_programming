#include "main.h"

/**
 * print_triangle- takes input n and prints triangle with size n
 * using oly putchar function only
 * @n: checks the input of the function
 * Return: Always 0.
 */
void print_triangle(int n)
{
	int i, j, z;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (i = 1; i <= n; i++)
	{
	for (j = 0; j < n - i; j++)
	_putchar(' ');
	for (z = n; z > n - i; z--)
	_putchar('#');
	_putchar('\n');
	}
	}
}
