#include<stdio.h>

int main()
{
	int score;
	printf("请输入期末成绩：");
	scanf_s("%d", &score);
	if (score >= 85 && score <= 100)
	{
		printf("A");
	}
	else if (score >= 70 && score <= 84)
	{
		printf("B");
	}
	else if (score >= 60 && score <= 69)
	{
		printf("C");
	}
	else
	{
		printf("D");
	}
	return 0;
}