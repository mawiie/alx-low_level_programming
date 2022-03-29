#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: input string
 * @c: character to be found
 * Return: pointer to the first reference of c in s
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	while ((count < 1) && (*(s + count) != c) && (*(s + count) != '\0'))
	{
		count++;
	}
	if (count == 0)
		return (NULL);
	else
		return (*(s + count));
}
