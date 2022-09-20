#include "main.h"

#include <stdio.h>

/**
* print_array - function that prints n elements of an array of integers
* @a: an integer
* @n: another integer
* author:Dr-savantcode
* Return: 0
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
