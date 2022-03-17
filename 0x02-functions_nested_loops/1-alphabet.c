#include "main.h"
/**
 * Main - print_alphabet in lower case
 *
 * Return - void 
 */
void print_alphabet (void)
{
	char text = 'a';
	
	while (text<= 'z')
	{
		_putchar(text);
		text++;
	}
	_putchar('\n');

}
