#include "main.h"
#include <stdio.h>

/**
 * _islower-function  check the character is uppercase or smallercase
 *
 * @c: check the input of function
 *
 * Return: retuns 1 if c is lower otherwise alwayzi 0 (success)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
