#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints print the product of the command line args
 * @argc : number of command line arguments
 * @argv : command line arguments
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
