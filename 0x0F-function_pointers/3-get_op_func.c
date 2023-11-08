#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct fnx to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 * Return: A ptr to the fxn  corresponding to the operator given as a param.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int k = 0;

	while (ops[k].op != NULL && *(ops[k].op) != *s)
		k++;

	return (ops[k].f);
}
