#include "main.h"
/**
 * main - checks if a character is an alphabet
 *
 * return: 1 if an alphabet, else 0
 */
int _isalpha(int c)
{
	if((c <= 'z' && c >= 'a') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
