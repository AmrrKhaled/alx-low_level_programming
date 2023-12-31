#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int z, j;

	for (z = 0; haystack[z] != '\0'; z++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[z + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[z]);
	}
	return (NULL);
}
