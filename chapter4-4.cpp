#include<stdio.h>

int main()
{
	int weight = 70;
	int height = 170;
	double bmi=0;
	bmi=weight*10000/((double)height*height);
	
	printf("¸ö¹«°Ô = %d, Å° = %d, bmi = %f\n",weight,height,bmi);
	return 0;
}