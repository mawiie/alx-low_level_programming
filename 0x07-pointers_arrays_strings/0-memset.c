#include "main.h"
/**
 * *_memset - fills n bytes of memory with char b
 * @s: pointer to memoory s
 * @b: constant char
 * @n: memory size
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
