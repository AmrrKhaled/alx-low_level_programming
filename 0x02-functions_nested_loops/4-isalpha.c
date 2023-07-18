#include "main.h"
#include <stdio.h>

/**
 * _isalpha-function  check the character is uppercase or smallercase
 *
 * @c: check the input of function
 *
 * Return: retuns 1 if c is a character otherwise always 0 (success)
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
	else
	return (0);
}
