#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int n = 0;
	printf("̨�ײ���Ϊ: ");
	scanf("%d", &n);
	int ways = frog(n);
	printf("%d��̨�׵�����Ϊ: %d", n, ways);
	return 0;
}

int frog(int n)
{
	if (n == 1)
	{
		return 1;
	}

	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return frog(n - 1) + frog(n - 2);
	}
}