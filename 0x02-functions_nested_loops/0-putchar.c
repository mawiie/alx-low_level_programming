#include "main.h"
	
/**
 * main - prints _putchar
 * description - prints _putchar
 * Return: 0 (Success)
 */
int main (void)
{
	char text[9] = "_putchar";
	
	for (int i=0; i<10; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return(0);
}
