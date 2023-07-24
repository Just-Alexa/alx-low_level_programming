#include "main.h"

/**
 * print_rev - prints a strign in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	char *ptr = s + strlen(s) - 1; /*Point ptr to last character */

	while (ptr >= s)
	{
		_putchar(*ptr);
		ptr--;
	}
	_putchar('\n');
}
