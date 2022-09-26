#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n;
	
	if (size > 0)
	{
		int i;
		
		for (i = 0; i < size; i++)
		des[i] = src[i];
	}
	
	return (dest);
}
