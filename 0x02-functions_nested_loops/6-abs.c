#include "main.h"
#include <stdio.h>

/**
 * _abs - function - check the numberis postive or negative
 * and return its abslute
 *
 * @n: check the input of function
 *
 * Return: retuns n if n is + or zero and return -1*n if n is -
*/
int _abs(int n)
{
	return (n >= 0 ? n : (-1 * n));
}
