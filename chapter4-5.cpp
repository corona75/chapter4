#include<Stdio.h>

int main(void)
{
	int result = 5;
	printf("변숫값 : %d\n NOT 연산 결과 : %d\n NOT NOT 연산 결과 : %d\n",result,(!result),(!(!result)));
}