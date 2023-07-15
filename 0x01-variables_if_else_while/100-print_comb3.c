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
	int x = 48, y = 48;
	int i = 0;

	while (x < 58)
	{
	i++;
	while (y < 58)
	{
	if (x > y)
	{
	putchar(y);
	putchar(x);
	if (!(x == '8' && y == '9'))
	{
	putchar(',');
	putchar(' ');
	}
	}
	else if (x < y)
	{
	putchar(x);
	putchar(y);
	if (!(x == '8' && y == '9'))
	{
	putchar(',');
	putchar(' ');
	}
	}
	y++;
	}
	x++;
	y = 48 + i;
	}
	putchar('\n');
	return (0);

}
