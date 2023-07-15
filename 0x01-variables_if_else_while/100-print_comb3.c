#include <stdlib.h>
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
	int x = 48, y = 49;

	for (int i = 0; i < 9  ; i++)
	{
	y = 49 + i;
	for (int j = 0; j < 9 - i ; j++)
	{
	putchar(x);
	putchar(y);
	if (!(x == '8' && y == '9'))
	{
	putchar(',');
	putchar(' ');
	}
	y++;
	}
	x++;
	}
	return (0);
}




