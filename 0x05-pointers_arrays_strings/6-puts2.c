#include "main.h"

/**
 * puts2 - prints every character
 * @str: string input
 */

void puts2(char *str)
{
	int position = 0;

	while (*str != '\0')
	{
		if (position % 2 == 0)
		{
			_putchar(*str);
		}
	str++;
	position++;
	}
	_putchar('\n');
}
