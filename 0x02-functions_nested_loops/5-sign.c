#include "main.h"
#include <stdio.h>

/**
 * print_sign -  check the number positve or negative or zero
 * and print the sign + or - or 0
 *
 * @n: check the input of function
 *
 * Return: retuns 1 if + 0 if 0 returns -1 if -
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar(48);
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
