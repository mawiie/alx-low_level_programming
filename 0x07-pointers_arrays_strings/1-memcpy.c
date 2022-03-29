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
	int count = 0;

	while (sizeof(src) <= n)
	{
		*(src + count) = *(dest + count);
		count++;
	}
	return (dest);
}
