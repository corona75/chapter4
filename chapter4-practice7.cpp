#include<Stdio.h>

int main(void)
{
	int value1=0;
	int result, temp;
	printf("���� ���� �Է� : ");
	scanf("%d",&value1);
	temp = value1 &2;
	result = temp != 0;
	printf("�� ��° ��Ʈ�� 1���� ���� : %d\n",result);
	
}