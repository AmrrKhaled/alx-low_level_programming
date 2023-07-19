#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Discription: A C program that prints the number is positive or negative
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int prev = 1;
	int current = 2;
	int next_term = 0;
	int sum = 2;

	while (next_term <= 4000000)
	{
	next_term = prev + current;
	prev = current;
	current = next_term;
	if (next_term % 2 == 0)
	sum += next_term;
	}
	printf("%d\n", sum);
	return (0);
}

