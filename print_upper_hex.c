#include "main.h"
/**
 * convert_to_HEX - convert form decimal to  HEXDECIMAL
 *
 * @n : the decimal number
 * Return: the number after conversion
*/
char *convert_to_HEX(unsigned int n)
{
	char *buffer = malloc(32), *hex = "ABCDEF";
	unsigned int i = 0, j;

	if (!buffer)
		return (NULL);
	for (; i < 32; i++)
		buffer[i] = '0';
	i = 0;
	while (n)
	{
		if (n % 16 >= 10)
		{
			for (j = 0; j < 6; j++)
			{
				if (n % 16 == 10 + j)
					buffer[i] = hex[j];
			}
		}
		else
			buffer[i] = (n % 16) + '0';
		n /= 16;
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/**
 * print_upper_hex - print the number in octal form
 *
 * @av : the number before conversion
 * Return: the length of the octal number
*/
int print_upper_hex(va_list av)
{
	unsigned int n = va_arg(av, unsigned int), len = 0;
	char *s = convert_to_HEX(n);
	int i;

	for (i = 31; i >= 0; i--)
	{
		if (s[i] != '0' || len)
		{
			_putchar(s[i]);
			len++;
		}
	}
	free(s);
	return (len);
}
