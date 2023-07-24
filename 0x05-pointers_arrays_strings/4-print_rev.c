#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i, len = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len; i >= 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
