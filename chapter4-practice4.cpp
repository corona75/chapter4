#include<Stdio.h>

int main(void)
{
double x,y,z;
	printf("������ ����?");
	scanf("%lf %lf %lf",&x,&y,&z);
	printf("��� ��� : %f",(x+y+z)/3);
	printf("��ȭ ��� : %f",3/(1/x+1/y+1/z));
}
}