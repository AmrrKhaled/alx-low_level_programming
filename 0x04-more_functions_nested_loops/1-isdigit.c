#include "main.h"
#include <stdio.h>

/**
 * _isdigit-function  check the character is uppercase or smallercase
 *
 * @c: check the input of function
 *
 * Return: retuns 1 if c is a digit otherwise always 0 (success)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
