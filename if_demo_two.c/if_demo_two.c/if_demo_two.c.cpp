#include<stdio.h>

int main()
{
	int money;
	printf("请输入你氪金的金额：");
	scanf_s("%d", &money);
	if (money == 0)
	{
		printf("0充玩家");
	}
	else if (money >= 1 && money <= 100)
	{
		printf("尊贵的VIP1");
	}
	else if (money >= 100 && money <= 499)
	{
		printf("尊贵的VIP2");
	}
	else if (money >= 500 && money <= 1000)
	{
		printf("尊贵的VIP3");
	}
	else if (money >= 1000 && money <= 1999)
	{
		printf("尊贵的VIP4");
	}
	else
	{
		printf("尊贵的VIP5");
	}
	return 0;
}