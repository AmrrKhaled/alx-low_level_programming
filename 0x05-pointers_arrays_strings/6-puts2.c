#include "main.h"

/**
 * puts_half - printsevend terms in string
 * @str: is pointer to the string to print
 */
void puts_half(char *str);
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
