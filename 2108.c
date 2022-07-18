#include<stdio.h>

int	arr[500001];

int	main()
{
	int	n, mid, tmp, min;
	int avg = 0;

	scanf("%d\n", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		avg += arr[i];
	}
	mid = n / 2;
	if (avg > 0)
		avg = (double)(avg) / n + 0.5;
	else
		avg = (double)(avg) / n - 0.5;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	printf("%d\n%d\n%d\n%d\n", avg, arr[mid], min, arr[n - 1] - arr[0]);
}
