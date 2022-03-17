#include "main.h"
/**
 * main - prints the alphabets ten times
 *
 * return: 0
 */
void print_alphabet_x10(void);
{
	char letter = 'a';

	for(int i =0; int<10; int ++)
	{
		while(letter<='z')
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n');
}
