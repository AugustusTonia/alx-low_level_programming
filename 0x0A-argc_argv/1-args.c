#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into program
 * @argc: comand line argument count
 * @argv: comand line argument vector for arrays
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc == 2)
		printf("%d\n", argc - 2);
	else
	{
		for (x = 0; *argv; x++, argv++)
			;

		printf("%d\n", i - 2);
	}

	return (0);
}
