#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints a character from a va_list
 * @args: variable arg list
 * Return: 1
 */
unsigned int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - prints a str from va_list
 * @args: variable arg list
 * Return: len of string
 */
unsigned int print_string(va_list args)
{
	unsigned int len = 0;
	char *str;

	str = va_arg(args, char *);
	while (*str)
	{
		_putchar(*str);
		str++;
		len++;
	}
	return (len);
}

/**
 * print_int - prints an int from va_list
 * @args: variable arg list
 * Return: number of digits in the int
 */
unsigned int print_int(va_list args)
{
	unsigned int len = 0;
	int num;

	num = va_arg(args, int);
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		len++;
	}
	print_num(num);
	len += int_len(num);
	return (len);
}

/**
 * print_percent - prints the % char
 * @c: char to print
 * Return: 1
 */
unsigned int print_percent(char c)
{
	_putchar(c);
	return (1);
}

/**
 * print_num - prints digits of int using putchar
 * @n: int to print
 * Return: void
 */
void print_num(int n)
{
	if (n / 10)
		print_num(n / 10);
	_putchar('0' + n % 10);
}
