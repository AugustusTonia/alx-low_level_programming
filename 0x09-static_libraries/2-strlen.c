#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: input string.
 * Return: length of a string.
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;

	}

	return (len);
}
