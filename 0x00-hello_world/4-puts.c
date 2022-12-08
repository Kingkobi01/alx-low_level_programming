#include <stdio.h>
#include <errno.h>
int main(void)
{
	puts("Programming is like building a multilingual puzzle\n");
	fprintf(stderr, "%d\n", errno);
	return (0);
}
