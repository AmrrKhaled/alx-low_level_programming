#include "main.h"
#include <stdio.h>

/**
 * print_last_digit-function  check the number and return its last digit
 *
 * @n: check the input of function
 *
 * Return: retuns the last digit of a number
*/
int print_last_digit(int n)
{
	int lastdigit;

	if (n >= 0)
	{
	lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (n % 10);
	}
	else
	{
	lastdigit = (-1 * (n % 10));
	_putchar(lastdigit + '0');
	return (-1 * (n % 10));
	}
}
