#include "main.h"
/**
 * convert_to_binary - convert form decimal to binary
 *
 * @n : the decimal number
 * Return: the number after conversion
*/
char *convert_to_binary(int n)
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
		buffer[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/**
 * print_binary - print the number in binary form
 *
 * @av : the number before conversion
 * Return: the length of the binary number
*/
int print_binary(va_list av)
{
	int n = va_arg(av, int), len = 0, i;
	char *s = convert_to_binary(n);

	for (i = 31; i >= 0; i--)
	{
		if (s[i] == '1' || (s[i] == '0' && len))
		{
			_putchar(s[i]);
			len++;
		}
	}
	free(s);
	return (len);
}
