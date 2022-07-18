#include<stdio.h>

int fief[50][50];

int main()
{
	int h, w, c, r;
	int max = 0, sum = 0;
	scanf("%d %d", &h, &w);

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			scanf("%d", &fief[i][j]);
		}
	}
	scanf("%d %d", &c, &r);

	for (int i = 0; i <= h - c; i++)
	{
		for (int j = 0; j <= w - r; j++)
		{
			sum = 0;
			for (int k = i; k < c + i; k++)
			{
				for (int z = j; z < r + j; z++)
				{
					sum += fief[k][z];
				}
			}
			if (max < sum)
			{
				max = sum;
			}

		}
	}

	printf("%d\n", max);

}