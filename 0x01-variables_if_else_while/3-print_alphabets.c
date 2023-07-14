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
	char ch2 = 'A';
	
	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	while (ch2 <= 'Z')
	{
	putchar(ch2);
	ch2++;
	}
	putchar('\n');
	return (0);
}
