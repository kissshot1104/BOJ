#include<stdio.h>

int	main()
{
	int	n, j, key;
	int	arr[1000] = {0};

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 1; i < n; i++)
	{
		key = arr[i];
		for (j = i - 1; arr[j] > key && j >= 0; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = key;
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
}
