#include "main.h"
#include <stdarg.h>

/**
 * print_str - prints a variadic string each per time to stdout
 * @args: variadic parameter
 * Return: number of characters printed on Success
 * upon failure -1
 */
int print_str(va_list args)
{
    int count = 0;
    char *str = va_arg(args, char *);

    if (str == NULL)
        return (-1);

    for (int i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
        count++;
    }

    return count;
}
