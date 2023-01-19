#include "calc.h"

/**
 * get_op_func - selects pointer to correct function
 * @s: input string
 * Return: pointer to correct function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (s != '+' || s != '-' || s != '*' || s != '/' || s != '%')
		return (NULL);
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
