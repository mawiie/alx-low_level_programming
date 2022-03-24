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

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
