#include<stdio.h>
int bord[9][9];
int main()
{
	int res[9][2] = { 0, };
	int num = 0;
	int min;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d",&bord[i][j]);
			res[i][0] += bord[i][j];
		}
		res[i][0] = (res[i][0] / 9.0)+0.5;
		res[i][1] = 101;
	}

	for (int i = 0; i < 9; i++)
	{
		min = 101;
		for (int j = 0; j < 9; j++)
		{
			num = res[i][0] - bord[i][j];
			if (num < 0)
			{
				num *= -1;
			}
			
			if (min > num)
			{
				min = num;
				res[i][1] = bord[i][j];
			}
		}
		printf("%d %d\n", res[i][0], res[i][1]);

	}
	return 0;
}