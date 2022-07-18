#include<stdio.h>

int main()
{
	int n, max;
	int arr[100] = { 0, };
	int cnt=0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[n - 1];
	for (int i = n-2 ;i >= 0; i--)
	{
		if (max < arr[i])
		{
			max = arr[i];
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}