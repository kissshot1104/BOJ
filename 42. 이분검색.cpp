#include<stdio.h>
int arr[1000001];
int main()
{
	int n, m, key, j, mid;

	scanf("%d", &n);
	scanf("%d", &m);

	int left = 0, right = n-1;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i < n; i++)
	{
		key = arr[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (key < arr[j])
			{
				arr[j + 1] = arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j + 1] = key;
	}

	while (true)
	{
		mid = (right + left) / 2;
		
		if (m < arr[mid])
		{
			right = mid - 1;
		}
		else if(m > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			break;
		}
	}

	printf("%d\n", mid+1);
}