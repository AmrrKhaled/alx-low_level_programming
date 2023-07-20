#include "main.h"
#include <stdio.h>

/**
 * _isupper-function  check the character is uppercase or smallercase
 *
 * @c: check the input of function
 *
 * Return: retuns 1 if c is upper otherwise alwayzi 0 (success)
*/
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	return (1);
	else
	return (0);
}
