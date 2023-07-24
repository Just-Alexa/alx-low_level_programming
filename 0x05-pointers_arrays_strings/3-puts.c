#include "main.h"
/**
 * _puts - prints a string, folowed by a new line, to stdout
 * @str: the string to print
 * Return: string and new line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(srt[i]);
		i++;
	}
		 _putchar('\n');
}
