#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, z;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < n - i; j++)
	_putchar(' ');
	for (z = n; z >= n - i; z--)
	_putchar('#');
	_putchar('\n');
	}
	}
	return (0);
}
