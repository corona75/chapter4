#include<Stdio.h>

int main(void)
{
	int first, second;
	int check1,check2,result;
	printf("ù��° ����?");
	scanf("%d",&first);
	scanf("�ι�° ����?");
	printf("%d",&second);
	check1 = first<10;
	check2 = second<10;
	result = check1&&check2;
	printf("��� : %d",result);
}
	

	
