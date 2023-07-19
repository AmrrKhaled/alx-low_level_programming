#include "main.h"
#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Discription: A C program that prints the number is positive or negative
 *
 *  Return: Always 0 (Success)
*/
int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
	if (i % 3 == 0)
	sum += i;
	else if (i % 5 == 0)
	sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
