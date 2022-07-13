#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
unsigned int print_char(va_list args);
unsigned int print_string(va_list args);
unsigned int print_int(va_list args);
unsigned int print_percent(char c);
void print_num(int n);
int int_len(int n);
/*int (*convert_func(const char *str))(va_list);*/

/**
 * struct - a struct that defines the conversion specifier
 * @c: format specifier
 * @conv_func: pointer to conversion function
 */
typedef struct conv_sp
{
	char *func;
	int (*conv_f)(va_list args);
} conv_type;

/* converter */
char *convert(unsigned long int num, int base, int lowercase);
#endif
