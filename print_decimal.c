#include "main.h"
/**
 * print_dec - prints a given integer from variadic parameters to base 10
 * @args: variadic parameter
 *
 * Return: number of characters printed on Success
 */
int print_dec(va_list args)
{
	int i = 0;
	int count = 0;
	int number;
	int print_arr[10];
	char x[1];

	number = va_arg(args, int);
	while (number != 0)
	{
		print_arr[i] = (number % 10);
		number = number / 10;
		if (number == 0)
			break;
		i++;
	}
	for (i; i >= 0; i--)
	{
		x[0] = ('0' + print_arr[i]);
		count += write(1, x, 1);
	}
	return (count);
}