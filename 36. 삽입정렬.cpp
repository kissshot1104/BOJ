#include<stdio.h>

int main()
{

	int n, key;
	int arr[101] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i < n; i++)
	{
		key = arr[i];
		for (int j = i; j > 0; j--)
		{
			if (arr[j - 1] > key)
			{
				arr[j] = arr[j - 1];
				arr[j - 1] = key;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}