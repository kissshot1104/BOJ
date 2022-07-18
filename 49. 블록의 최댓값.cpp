#include<stdio.h>

int block[2][10];

int main()
{
	int n;
	int cnt = 0;

	scanf("%d", &n);

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &block[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (block[0][i] < block[1][j])
			{
				cnt += block[0][i];
			}
			else
			{
				cnt += block[1][j];
			}
		}
	}

	printf("%d\n", cnt);

}