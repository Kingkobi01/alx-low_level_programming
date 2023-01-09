#include <stdio.h>

/**
 * main - Prints out the number of command line arguments
 * @argc : number of command line arguments
 * @argv : command line arguments
 * Return: 0 Always
 */

int main(int argc, char __attribute((unused)) * argv[])
{
	int numberOfCommandLineArgs = argc - 1;

	printf("%d\n", numberOfCommandLineArgs);
	return (0);
}
