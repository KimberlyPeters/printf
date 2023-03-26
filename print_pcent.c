#include "main.h"

/**
 * print_pcent - prints character % to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_pcent(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}	
