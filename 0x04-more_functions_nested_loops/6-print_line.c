#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_line -  function takes input n and prints this _ n times and the \n if
 * n is 0 or negative prints \n only
 *
 * @n: check the input of the function
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (n <= 0)
	{
	_putchar('\n');
	break;
	}
	else
	_putchar('_');
	}
	if (n > 0)
	_putchar('\n');
}
