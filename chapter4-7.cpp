#include<Stdio.h>

int main(void)
{
	int operand1 = 12;
	int operand2 = 10;

	int result_and = operand1&operand2;
	int result_or = operand1 | operand2;
	int result_xor = operand1 ^ operand2;
	int result_not = ~operand1;

	printf("%d AND %d = %d\n",operand1,operand2,result_and);
	printf("%d OR %d = %d\n",operand1,operand2,result_or);
	printf("%d XORAND %d = %d\n",operand1,operand2,result_xor);
	printf("NOT %d = %d\n",operand1,result_not);
	
}