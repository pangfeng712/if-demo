#include<stdio.h>

int main()
{
	int rowA = 5;
	int lineA = 6;
	int rowB = 6;
	int lineB = 7;
	if ((rowA == rowB) && (lineA - lineB == 1 || lineA - lineB == -1))
	{
		printf("我会开心的看电影");
	}

	else
	{
		printf("我会开心的打游戏");
	}
	return 0;
}