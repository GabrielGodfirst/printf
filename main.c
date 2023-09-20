#include "main.h"
/**
 * main - entry function
 *
 * Return: always 0
*/
int main(void)
{
	int len, len2;
	char *s = NULL;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%i, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	len = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
	_printf("%d\n", len);
	printf("%d\n", len2);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	len = _printf("String:[%s]\n", s);
	len2 = printf("String:[%s]\n", s);
	_printf("%d\n", len);
	printf("%d\n", len2);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = _printf("Binary:%b\n", 156);
	_printf("Len:[%d]\n", len);
	len = _printf("%b\n%o\n%x\n%X\n", 15, 88, 130, 130);
	printf("%d\n", len);
	return (0);
}
