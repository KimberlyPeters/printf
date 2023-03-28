#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
int main(void)
{
	int count_std = 0;
	int count_hmd = 0;

	write(1,"STANDARD:\n",10);
	count_std = printf("My number is %d\n", 123);
	printf("I printed %d characters\n", count_std);

	write(1,"________________________\n",25);

	write(1,"HOME_MADE:\n",11);
	count_hmd = _printf("My number is %d\n", 123);
	printf("I printed %d characters\n", count_hmd);

	return (0);
}
*/

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}

