#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int n = 0;
	printf("台阶层数为: ");
	scanf("%d", &n);
	int ways = frog(n);
	printf("%d层台阶的跳法为: %d", n, ways);
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