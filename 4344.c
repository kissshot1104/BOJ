#include<stdio.h>

int	main()
{
	int		arr[1001] = {0,};
	int		n, n2;
	int		avg1;
	double	avg2;

	scanf("%d\n", &n);
	if (n < 0)
		return (-1);
	for(int i = 0; i < n; i++)
	{
		avg1 = 0;
		avg2 = 0;
		scanf("%d\n", &n2);
		if (n2 > 1000)
			return (-1);
		for (int j = 0; j < n2; j++)
		{
			scanf("%d", &arr[j]);
			if (!(0 <= arr[j] && arr[j] <= 100))
				return (-1);
			avg1 += arr[j];
		}
		avg1 /= n2;
		for (int j = 0; j < n2; j++)
			if (avg1 < arr[j])
				avg2 += 100.0 / n2;
		printf("%.3f%%\n", avg2);
	}
}
