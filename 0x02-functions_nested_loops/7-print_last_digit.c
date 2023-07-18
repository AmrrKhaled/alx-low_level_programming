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
	if (n >= 0)
	{
	_putchar(n % 10);
	retrun(n % 10);
	}
	else
	{
	_putchar((n * -1) % 10);
	retrun((n * -1) % 10);
}
}
