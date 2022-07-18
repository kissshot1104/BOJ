#include<stdio.h>

int main()
{
	int score1[101] = { 0, }, score2[101] = { 0, };

	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score1[i]);
		score2[i] = 1;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (score1[i] > score1[j])
			{
				score2[j]++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", score2[i]);
	}

}