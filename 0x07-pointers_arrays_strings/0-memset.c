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
	int count = 0;

	while (sizeof(*s) <= n)
	{
		*(s + count) = b;
		count++;
	}
	return (s);
}
