#include "main.h"
#include <stdio.h>

/**
 * print_sign:  check the number positve or negative
 *
 * @n: check the input of function
 *
 * Return: retuns 1 if c is positive otherwise alwayzi 0 (success)
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+')
	return (1);
	}
	else if (n == 0)
	{
	_putchar(0)
	return (0);
	}
	else
	{
	_putchar('-')
	return (0);
	}
}
