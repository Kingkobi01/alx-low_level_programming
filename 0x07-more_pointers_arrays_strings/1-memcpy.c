#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @dest : Where the duplicate is goint to
 * @src : where the duplicate is coming from
 * @n : numberr of bytes to fill
 * Return: Address of @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

  for (i = 0; i < n; i++)
  {
    *(dest + i) = *(src + i);
  }
  return (dest);
}
