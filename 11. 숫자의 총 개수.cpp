#include<stdio.h>

int main()
{
	int n, sub_i;
	int cnt = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sub_i = i;
		while (sub_i)
		{
			sub_i /= 10;
			cnt++;
		}
	}

	printf("%d", cnt);
}