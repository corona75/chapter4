#include<stdio.h>
int main(void)
{
	int age = 0;
	age = 19;

	printf("���� ���� ������ �׽�Ʈ (before) : %d\n",++age);
	printf("���� ���� ������ �׽�Ʈ (after) : %d\n",age);

	age = 19;
	printf("���� ���� ������ �׽�Ʈ (before) : %d\n",age++);
	printf("���� ���� ������ �׽�Ʈ (after) : %d\n",age);
	return 0 ;
}