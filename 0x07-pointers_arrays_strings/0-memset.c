#include "main.h"

/* _memset - function that fills memory with a constant byte
* @s*: memory space to be filled
* @b: byte to fill with
* @n: number of spaces to fill
*
* Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
