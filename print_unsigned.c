#include "main.h"
/**
 * cout_u - recursive function that prins the full number
 * @n : the number
 */
void cout_u(unsigned int n)
{
	if (n / 10)
		cout(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * print_unsigned - prints an unsigend integer
 *
 * @av : the integer in argument form
 * Return: the length of the integer
*/
int print_unsigned(va_list av)
{
	unsigned int n = va_arg(av, unsigned int), len = 0;

	cout(n);
	if (!n)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
