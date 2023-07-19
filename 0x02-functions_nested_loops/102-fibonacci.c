#include "main.h"
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: A C program that prints the number is positive or negative
 *
 * Return: Always 0 (Success)
*/
int main(void) 
{
	long unsigned f1 = 1;
	long unsigned f2 = 1;
	long unsigned f3;
	int i;
	for ( i = 0; i < 50;i++)
	{
	printf("%lu", f2);
	if (i < 49)
	printf(", ");
	f3 = f1 + f2;
	f1 = f2;
	f2 = f3;
	}
	printf("\n");
	return (0);
}
