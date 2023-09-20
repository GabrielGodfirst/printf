#include "main.h"

/**
 * _printf - prints the enire string
 *
 * @format : the string that been printed
 * Return: the lenght of the string
*/
int _printf(const char *format, ...)
{
	int len = 0, i = 0, j;
	va_list av;
	spicify sp[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_number},
		{'i', print_number}, {'%', print_precentage},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_lower_hex},
		{'X', print_upper_hex},	{0, NULL}
	};
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(av, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			j = 0;
			while (sp[j].spicifier)
			{
				if (format[i + 1] == sp[j].spicifier)
				{
					len += sp[j].func(av);
					i++;
					break;
				}
				j++;
			}
		}
		i++;
	}
	va_end(av);
	return (len);
}
