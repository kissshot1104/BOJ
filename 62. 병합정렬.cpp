#include<stdio.h>

int arr[101],s_arr[101];

int n = 0;
int p1, p2, p3;

void Sort(int lt, int rt)
{
	if (lt >= rt)
	{
		return;
	}
	
	int mid = (lt + rt) / 2;
	Sort(lt, mid);
	Sort(mid + 1, rt);
	p1 = p3 = lt;
	p2 = mid + 1;

	while (p1 <= mid && p2 <= rt)
	{
		if (arr[p1] < arr[p2])
		{
			s_arr[p3++] = arr[p1++];
		}
		else
		{
			s_arr[p3++] = arr[p2++];
		}
	}
	while (p1 <= mid)
	{
		s_arr[p3++] = arr[p1++];
	}
	while (p2 <= rt)
	{
		s_arr[p3++] = arr[p2++];
	}

	for (int i = lt; i <= rt; i++)
	{
		arr[i] = s_arr[i];
	}

}

int main()
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	Sort(1, n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}
}