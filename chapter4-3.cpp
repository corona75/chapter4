#include<stdio.h>

int main()
{
	double bmi = 0;
	int weight = 0;
	int height = 0;
	int check_low = 0;
	int check_high = 0;

	printf("�����Դ� ���ΰ���?");
	scanf("%d",&weight);
	printf("Ű�� ���ΰ���?");
	scanf("%d",&height);
	bmi = weight * 10000 / ((double)height*height);
	check_low = bmi >= 18.5;
	check_high = bmi < 23;

	printf("������ = %d, Ű = %d, bmi = %f\n",weight,height,bmi);
	printf("18.5�̻� ���� : %d\n",check_low);
	printf("23 �̸� ���� : %d\n",check_high);

	return 0;
}