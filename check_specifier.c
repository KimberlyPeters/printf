#include "main.h"
/**
 * check_specifier - selects the correct conversion
 * specifier to perform the operation.
 * @s: argument indentifier
 * @count: index for argument indentifier
 * Return: pointer to a function.
 */
int (*check_specifier(const char *s, int count))(va_list, char *, unsigned int)
{
	funct_t ft[] = {
		{"c", print_chr}, {"s", print_str},
		{"i", print_int}, {"d", print_int},
		{"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex},
		{"X", print_upx}, {"S", print_usr},
		{"p", print_add}, {"li", prinlint},
		{"ld", prinlint}, {"lu", prinlunt},
		{"lo", prinloct}, {"lx", prinlhex},
		{"lX", prinlupx}, {"hi", prinhint},
		{"hd", prinhint}, {"hu", prinhunt},
		{"ho", prinhoct}, {"hx", prinhhex},
		{"hX", prinhupx}, {"#o", prinnoct},
		{"#x", prinnhex}, {"#X", prinnupx},
		{"#i", print_int}, {"#d", print_int},
		{"#u", print_unt}, {"+i", prinpint},
		{"+d", prinpint}, {"+u", print_unt},
		{"+o", print_oct}, {"+x", print_hex},
		{"+X", print_upx}, {" i", prinsint},
		{" d", prinsint}, {" u", print_unt},
		{" o", print_oct}, {" x", print_hex},
		{" X", print_upx}, {"R", print_rot},
		{"r", print_rev}, {"%", print_prg},
		{"l", print_prg}, {"h", print_prg},
		{" +i", prinpint}, {" +d", prinpint},
		{"+ i", prinpint}, {"+ d", prinpint},
		{" %", print_prg}, {NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = count;
	while (ft[i].type_arg)
	{
		if (s[count] == ft[i].type_arg[j])
		{
			if (ft[i].type_arg[j + 1] != '\0')
				count++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			count = first_index;
		}
	}
	return (ft[i].f);
}
