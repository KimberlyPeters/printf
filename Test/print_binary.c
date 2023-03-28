#include "main.h"
#include <stdarg.h>

/**
 * print_binary - prints a given integer from variadic parameters to binary
 * @args: variadic parameter
 *
 * Return: number of characters printed on Success
 */

int print_binary(va_list args)
{
	int count = 0;
	unsigned int number;
	int binary[32];
	int i;

	number = va_arg(args, unsigned int);
	if (number == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		for (i = 0; number > 0; i++)
		{
			binary[i] = number % 2;
			number /= 2;
		}
		for (i = i; i >= 0; i--)
		{
			_putchar('0' + binary[i]);
			count++;
		}
	}
	return (count);
}
