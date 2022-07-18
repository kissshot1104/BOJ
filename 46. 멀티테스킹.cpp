#include<stdio.h>

int main()
{
	int n, k;
	int tot = 0;
	int arr[2001] = { 0, };

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		tot += arr[i];
	}
	scanf("%d", &k);

	if (tot <= k)
	{
		printf("%d", -1);
		return 0;
	}
	int i = -1;
	while (k)
	{	
		i++;

		if (i == n)
		{
			i = 0;
		}

		if (arr[i] != 0)
		{
			arr[i]--;
			k--;
		}

	}
	i++;
	while (arr[i] == 0)
	{
		if (i == n)
		{
			i = 0;
		}
		i++;
	}


	printf("%d\n", i + 1);


}