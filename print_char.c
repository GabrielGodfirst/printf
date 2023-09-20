#include "main.h"

/**
 * print_char - to print the character
 *
 * @av : the character in argument form
 * Return: always 1
*/
int print_char(va_list av)
{
	char s = va_arg(av, int);

	_putchar(s);
	return (1);
}
