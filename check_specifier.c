#include "main.h"
/**
 * check_specifier - check that character is a valid specifier
 * and assigns an appropriate function for its printing
 * @format: the specifier (char*)
 *
 * Return: pointer to function
 */


int (*check_specifier(const char *format))(va_list)
{
	int i;

	funct_t print_array[4] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pcent},
		{NULL, NULL}};

	for (i = 0; print_array[i].t != NULL; i++)
	{
		if (*(print_array[i].t) == *format)
		{
			return (print_array[i].f);
		}
	}

	return (NULL);
}
