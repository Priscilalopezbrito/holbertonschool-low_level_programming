#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main()
{
	op_add(1, 1);
	op_sub(10, 4);
	op_mul(5, 6);
	op_div(10, 2);
	op_div(10, 0);
	op_mod(1024, 98);
	op_mod(1024, 0);

	return (0);
}
