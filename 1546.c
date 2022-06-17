#include<stdio.h>

int	main(void)
{
	int		score[1001] ={0,};
	int		n;
	int 	max_score = 0;
	double	avg = 0;

	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&score[i]);
		if (max_score < score[i])
			max_score = score[i];
	}
	for (int i = 0; i <= n; i++)
		avg += (double)(score[i]) / max_score * 100;
	avg /= n;
	printf("%lf\n", avg);
	return (0);
}
