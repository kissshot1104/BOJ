#include<stdio.h>

int arr1[30001];
int arr2[30001];
int arr3[30001];

void Sort(int *arr,int n)
{
	int key,j;

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

}

int main()
{
	int p1 = 0, p2 = 0, p3 = 0;
	int n1, n2;

	scanf("%d", &n1);

	for (int i = 0; i < n1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	Sort(arr1, n1);


	scanf("%d", &n2);

	for (int i = 0; i < n2; i++)
	{
		scanf("%d", &arr2[i]);
	}
	Sort(arr2, n2);
	while (p1 < n1 && p2 < n2)
	{
		if (arr1[p1] == arr2[p2])
		{
			arr3[p3++] = arr1[p1];
			p1++;
			p2++;
		}
		else if(arr1[p1] < arr2[p2])
		{
			p1++;
		}
		else
		{
			p2++;
		}
	}

	for (int i = 0; i < p3; i++)
	{
		printf("%d ", arr3[i]);
	}
}