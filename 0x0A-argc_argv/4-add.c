#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints print the sum of the command line args
 * @argc : number of command line arguments
 * @argv : command line arguments
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int product, i, error;

	product = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i][0]))
		{
			error = 1;
			break;
		}
		else
		{
			product = product + atoi(argv[i]);
		}
	}

	if (error)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", product);
	}

	return (0);
}
