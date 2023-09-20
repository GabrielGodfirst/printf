#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
int _putchar(char c);
int _strlen(char *s);
int print_char(va_list av);
int print_string(va_list av);
int print_precentage(void);
int print_number(va_list av);
int pirnt_unsigned_number(va_list av);
int print_binary(va_list av);
char *convert_to_binary(int n);
void cout(int n);
void cout_u(unsigned int n);
int print_unsigned(va_list av);
int print_octal(va_list av);
char *convert_to_octal(unsigned int n);
int print_lower_hex(va_list av);
char *convert_to_hex(unsigned int n);
int print_upper_hex(va_list av);
char *convert_to_HEX(unsigned int n);
int _printf(const char *format, ...);
/**
 * struct sp - a sp struct
 * @spicifier: spicify
 * @func: function
 *
 * Description: just a lone dog struct in a big kitty world
 */
typedef struct sp
{
	char spicifier;
	int (*func)();
} spicify;

#endif
