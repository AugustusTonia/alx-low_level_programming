#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of coins to make change for an amount.
 * of money.
 * @argc: arguement counter.
 * @argv: arguement vector.
 * Return: 0 - success.
*/

int main(int argc, char *argv[])
{
	int cents, count = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		count += 1;
	}
	printf("%d\n", count);
	return (0);
}
