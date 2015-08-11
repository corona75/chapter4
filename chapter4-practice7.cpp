#include<Stdio.h>

int main(void)
{
	int value1=0;
	int result, temp;
	printf("정수 숫자 입력 : ");
	scanf("%d",&value1);
	temp = value1 &2;
	result = temp != 0;
	printf("두 번째 비트가 1인지 여부 : %d\n",result);
	
}