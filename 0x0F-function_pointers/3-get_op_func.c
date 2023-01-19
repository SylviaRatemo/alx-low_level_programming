#include "calc.h"

/**
 * get_op_func - selects pointer to correct function
 * @s: input string
 * @int: function parameters
 * Return: pointer to correct function
 */

int (*get_op_func(char *s))(int, int)
{
	if (s != '+' || s != '-' || s != '*' || s != '/' || s != '%')
		return (NULL);

}
