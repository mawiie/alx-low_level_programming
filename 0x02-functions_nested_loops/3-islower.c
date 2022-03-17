#include "main.h"
/**
 * main - checks if a character is lowercase
 *
 * return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if(c>='a' && c<='z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
