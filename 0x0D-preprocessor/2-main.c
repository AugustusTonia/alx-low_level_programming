#include <stdio.h>

/**
 * main - function that prints a file name using a predefined 
 * macro
 * Return: always 0 
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}

