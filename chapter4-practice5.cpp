#include<Stdio.h>

int main(void)
{
	int first, second;
	int check1,check2,result;
	printf("첫번째 숫자?");
	scanf("%d",&first);
	scanf("두번째 숫자?");
	printf("%d",&second);
	check1 = first<10;
	check2 = second<10;
	result = check1&&check2;
	printf("결과 : %d",result);
}
	

	
