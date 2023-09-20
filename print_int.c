#include "main.h"
/**
 * cout- recursive function that prins the full number
 * @n : the number
 */
void cout(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
		cout(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * print_number - prints an integer
 *
 * @av : the integer in argument form
 * Return: the length of the integer
*/
int print_number(va_list av)
{
	int n = va_arg(av, int), len = 0;

	cout(n);
	if (!n)
		return (1);
	if (n < 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
