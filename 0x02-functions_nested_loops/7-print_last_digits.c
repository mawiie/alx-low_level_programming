#include "main.h"
/**
 * main - prints the last digit of a number
 *
 * return - integer
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		last = (-n) % 10;
		_putchar(last);
		return(last);
	}
	else
	{
		last = n % 10;
		_putchar(last);
		return(last);
	}
}
