#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_square -  function takes input n and prints this # n times at the
 * shape of square and the \n if n is 0 or negative prints \n only
 *
 * @n: check the input of the function
*/
void print_square(int n)
{
	int i, j;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < n; j++)
	_putchar('#');
	_putchar('\n');
	}
}
}
