#include<stdio.h>

int main()
{
	int arr1[101] = { 0, }, arr2[101] = { 0, };
	int p1=1, p2=1, p3=1;
	int n1, n2;

	scanf("%d", &n1);
	for (int i = 1; i <= n1; i++)
	{
		scanf("%d", &arr1[i]);
	}

	scanf("%d", &n2);

	for (int i = 1; i <= n2; i++)
	{
		scanf("%d", &arr2[i]);
	}

	for (int i = 1; i <= n1 + n2; i++)
	{
		
		if (arr1[p1] <= arr2[p2] && p1 <= n1 && p2 <= n2)
		{
			printf("%d ",arr1[p1++]);
		}
		else
		{
			printf("%d ", arr2[p2++]);
		}
	}

	while (p1 != n1)
	{
		printf("%d ", arr1[p1++]);
	}
	while (p2 != n2)
	{
		printf("%d ", arr2[p2++]);
	}
	

	

	
}