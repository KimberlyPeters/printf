#include <stdarg.h>
#ifndef _MAIN_H_
#define _MAIN_H_

int _printf(const char *format, ...);
int _putchar(char c);
int (*check_specifier(char*))(va_list);

/**
 * struct funct - struct for printer functions
 * @t: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions
 */

typedef struct funct
{
	char *t;
	int (*f)(var_list);
} funct_t;


int print_char(va_list args);
int print_str(va_list args);
int print_cent(va_list args);
int print_int(va_list args);
int print_dec(va_list args);



#endif
