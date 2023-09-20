#include "main.h"
/**
 * convert_to_hex - convert form decimal to hexadecimal
 *
 * @n : the decimal number
 * Return: the number after conversion
*/
char *convert_to_hex(unsigned int n)
{
	char *buffer = malloc(32), *hex = "abcdef";
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
 * print_lower_hex - print the number in hecadecimal form
 *
 * @av : the number before conversion
 * Return: the length of the octal number
*/
int print_lower_hex(va_list av)
{
	unsigned int n = va_arg(av, unsigned int), len = 0, strlen;
	char *s = convert_to_hex(n);

	strlen = _strlen(s);
	strlen--;
	while (strlen)
	{
		_putchar(s[strlen]);
		len++;
		strlen--;
	}
	free(s);
	return (len);
}
