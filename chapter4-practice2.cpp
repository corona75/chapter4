#include<Stdio.h>

int main(void)
{
	int first,second,third,sum;
	double average;
	printf("ù��° ����?");
	scanf("%d",&first);
	printf("�ι�° ����?");
	scanf("%d",&second);
	printf("����° ����?");
	scanf("%d",&third);
	sum = first+second+third;
	average = (double)sum/3;
	printf("�� : %d\n",sum);
	printf("��� : %f",(double)average);

}