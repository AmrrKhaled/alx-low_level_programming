#include "main.h"
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	if (abs(n) < 10)
	putchar(n % 10 + 48);
	else if (abs(n) < 100)
	{
	putchar(n / 10 + 48);
	putchar(n % 10 + 48);
	}
	else if (abs(n) < 1000)
	{
	putchar(n / 100 + 48);
	putchar((n / 10) % 10 + 48);
	putchar(n % 10 + 48);
	}
	else if (abs(n) < 10000)
	{
	putchar(n / 1000 + 48);
	putchar((n / 10) % 10 + 48);
	putchar((n / 10) % 10 + 48);
	putchar(n % 10 + 48);
	}
}
