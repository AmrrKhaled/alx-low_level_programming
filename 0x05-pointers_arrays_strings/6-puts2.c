#include "main.h"

/**
 * puts2 - prints evend terms in string
 * @str: is pointer to the string to print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
