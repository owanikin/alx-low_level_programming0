#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: void
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	putchar('\n');
}
