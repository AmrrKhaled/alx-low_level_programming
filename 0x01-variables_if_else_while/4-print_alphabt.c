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
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch == 'e' || ch == 'q')
	{
	ch++;
	continue;
	}
	putchar(ch);
	ch++;
	}
	putchar('\n');
}
