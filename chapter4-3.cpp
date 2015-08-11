#include<stdio.h>

int main()
{
	double bmi = 0;
	int weight = 0;
	int height = 0;
	int check_low = 0;
	int check_high = 0;

	printf("몸무게는 얼마인가요?");
	scanf("%d",&weight);
	printf("키는 얼마인가요?");
	scanf("%d",&height);
	bmi = weight * 10000 / ((double)height*height);
	check_low = bmi >= 18.5;
	check_high = bmi < 23;

	printf("몸무게 = %d, 키 = %d, bmi = %f\n",weight,height,bmi);
	printf("18.5이상 여부 : %d\n",check_low);
	printf("23 미만 여부 : %d\n",check_high);

	return 0;
}