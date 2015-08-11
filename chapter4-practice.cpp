#include<stdio.h>

int main(void)
{
	int x = 3;
	int y = 4;
	printf("%d + %d = %d\n",x,y,x+y);
	printf("%d - %d = %d\n",x,y,x-y);
	printf("%d X %d = %d\n",x,y,x*y);
	printf("%d / %d = %d\n",x,y,x/y);
	printf("%d / %d = %d\n",(double)x,(double)y,(double)x/y);
	printf("%d %% %d = %d\n",x,y,x%y);
}