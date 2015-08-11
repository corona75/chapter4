#include<Stdio.h>

int main(void)
{
	int first,second,third,sum;
	double average;
	printf("첫번째 값은?");
	scanf("%d",&first);
	printf("두번째 값은?");
	scanf("%d",&second);
	printf("세번째 값은?");
	scanf("%d",&third);
	sum = first+second+third;
	average = (double)sum/3;
	printf("합 : %d\n",sum);
	printf("평균 : %f",(double)average);

}