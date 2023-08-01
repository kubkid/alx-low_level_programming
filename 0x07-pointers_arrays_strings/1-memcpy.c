#include "main.h"
/**
 *
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @srt: memory is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byted change
 */

char *_memcpy(char *dest, char *srt, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = srt[r];
		n--;
	}
	return (dest);
}
