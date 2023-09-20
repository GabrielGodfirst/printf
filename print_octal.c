#include "main.h"
/**
 * convert_to_octal - convert form decimal to octal
 *
 * @n : the decimal number
 * Return: the number after conversion
*/
char *convert_to_octal(unsigned int n)
{
	char *buffer = malloc(32);
	int i = 0;

	if (!buffer)
		return (NULL);
	for (; i < 32; i++)
		buffer[i] = '0';
	i = 0;
	while (n)
	{
		buffer[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}
	return (buffer);
}
/**
 * print_octal - print the number in octal form
 *
 * @av : the number before conversion
 * Return: the length of the octal number
*/
int print_octal(va_list av)
{
	unsigned int n = va_arg(av, unsigned int), len = 0, i;
	char *s = convert_to_octal(n);

	i = _strlen(s) - 1;
	while (i)
	{
		_putchar(s[i]);
		len++;
		i--;
	}
	free(s);
	return (len);
}
