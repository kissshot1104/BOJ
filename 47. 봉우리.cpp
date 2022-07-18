#include<stdio.h>
int bord[51][51];

int main()
{
	int n;
	bool flag;
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &bord[i][j]);
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (bord[i][j] > bord[i-1][j])
			{
				if (bord[i][j] > bord[i + 1][j])
				{
					if (bord[i][j] > bord[i][j - 1])
					{
						if (bord[i][j] > bord[i][j + 1])
						{
							cnt++;
						}
					}
				}
			}
		}
	}
		
	printf("%d\n", cnt);

	return 0;
}