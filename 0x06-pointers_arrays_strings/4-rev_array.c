#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int a, b, memory;

	for (a = 0; a < n - 1; a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			memory = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = memory;
		}
	}
}
