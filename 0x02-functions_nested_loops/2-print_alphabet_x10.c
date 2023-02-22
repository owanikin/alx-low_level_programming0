#include "main.h"

/**
 * main - -print_alphabet_x10.c - prints alphabet 10 times
 * Return: always Success
 */

void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}

