#include <stdio.h>

/**
 * main - Prints all command line arguments
 * @argc : number of command line arguments
 * @argv : command line arguments
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
