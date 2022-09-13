#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in ten times
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char i, c;

	for (i = '0'; i <= 9; i++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}
