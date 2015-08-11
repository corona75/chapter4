#include<stdio.h>
int main(void)
{
	int age = 0;
	age = 19;

	printf("전위 증가 연산자 테스트 (before) : %d\n",++age);
	printf("전위 증가 연산자 테스트 (after) : %d\n",age);

	age = 19;
	printf("전위 증가 연산자 테스트 (before) : %d\n",age++);
	printf("전위 증가 연산자 테스트 (after) : %d\n",age);
	return 0 ;
}