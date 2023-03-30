#include "main.h"
/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, ibuf = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;

	va_start(arguments, format);
	if (!format)
		return (-1);
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				print_buf(buffer, ibuf);
				free(buffer);
				va_end(arguments);
				return (-1); }
			function = get_print_func(format[i]);
			if (function == NULL)
			{
				handl_buf(buffer, '%', &ibuf);
				handl_buf(buffer, format[i], &ibuf);
				len += 2; }
			else
			{
				len += function(arguments, buffer, &ibuf, format[i + 1]);
				i++; }
		}
		else
		{
			handl_buf(buffer, format[i], &ibuf);
			len++; }
		if (ibuf == 1024)
		{
			print_buf(buffer, ibuf);
			ibuf = 0;
		} i++;
	} print_buf(buffer, ibuf);
	free(buffer);
	va_end(arguments);
	return (len); }
