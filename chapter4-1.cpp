#include<stdio.h>

int main()
{
	int width,height,result;
	printf("밑변 입력 후 엔터를 치세요.");
	scanf("%d",&width);
	printf("높이 입력 후 엔터를 치세요.");
	scanf("%d",&height);
	result = width * height;
	printf("넓이 : %d",result);
	return 0;

}