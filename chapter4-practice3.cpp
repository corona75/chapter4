#include<Stdio.h>

int main(void)
{

	int first,second,third,sum;
	double average;
	printf("세개의 값은?");
	scanf("%d %d %d",&first,&second,&third);
	sum = first+second+third;
	average = (double)sum/3;
	printf("합 : %d\n",sum);
	printf("평균 : %f",(double)average);


}