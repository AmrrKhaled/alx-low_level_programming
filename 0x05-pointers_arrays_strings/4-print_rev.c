#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void print_rev(char *s)
{
	int i, len = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
