#include "main.h"

/**
* main - print number 0 to 9
* description: prints the numbers, from 0 to 9
* Return: Always 0
*/

#include "main.h"

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
