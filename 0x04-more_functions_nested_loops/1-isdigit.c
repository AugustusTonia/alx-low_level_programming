#include "main.h"

/**
<<<<<<< HEAD
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: input number.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
=======
 * _isdigit - checks for characters that are digits
 *@c: character 
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
>>>>>>> cc87a5371ed279a188a46a96ecbc7e6f6844ea50
}
