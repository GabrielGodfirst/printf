#include "main.h"
/**
 * _strlen - get the legth of the string
 *
 * @s : the string
 * Return: the length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * print_string - to print string
 *
 * @av : the string in argument form
 * Return: the length of the string
*/
int print_string(va_list av)
{
	char *s = va_arg(av, char *);
	int i = 0;

	if (s == NULL)
	{
		s = "(null)";
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
	}
	else
	{
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
	}
	return (i);
}
