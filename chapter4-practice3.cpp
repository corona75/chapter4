#include<Stdio.h>

int main(void)
{

	int first,second,third,sum;
	double average;
	printf("������ ����?");
	scanf("%d %d %d",&first,&second,&third);
	sum = first+second+third;
	average = (double)sum/3;
	printf("�� : %d\n",sum);
	printf("��� : %f",(double)average);


}