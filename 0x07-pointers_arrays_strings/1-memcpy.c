#include "main.h"
/**
 * _memcpy - copies data from one memory to another
 * @src: source memory
 * @dest: memory destination
 * @n: size of byte
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
