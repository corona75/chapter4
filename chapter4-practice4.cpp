#include<Stdio.h>

int main(void)
{
double x,y,z;
	printf("세개의 값은?");
	scanf("%lf %lf %lf",&x,&y,&z);
	printf("산술 평균 : %f",(x+y+z)/3);
	printf("조화 평균 : %f",3/(1/x+1/y+1/z));
}
}