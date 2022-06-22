#include<stdio.h>

int	main()
{
	char	buf[81] = {0};
	int		add = 1;
	int 	score = 0;
	int		n;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", buf);
		for (int j = 0; buf[j]; j++)
		{
			if (buf[j] == 'O')
				score += add++;
			else
				add = 1;
		}
		printf("%d\n", score);
		add = 1;
		score = 0;
	}
}
