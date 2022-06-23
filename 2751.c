#include<stdio.h>

int	arr1[1000001];
int	arr2[1000001];
void	sort(int front, int back)
{
	if (front >= back)
		return ;

	int mid = (front + back) / 2;
	sort(front, mid);
	sort(mid + 1, back);
	int	p1 = front;
	int p2 = mid + 1;
	int p3 = front;
	while (p1 <= mid && p2 <= back)
	{
		if (arr1[p1] < arr1[p2])
			arr2[p3++] = arr1[p1++];
		else
			arr2[p3++] = arr1[p2++];
	}
	while (p1 <= mid)
		arr2[p3++] = arr1[p1++];
	while (p2 <= back)
		arr2[p3++] = arr1[p2++];
	for (int i = front; i <= back; i++)
		arr1[i] = arr2[i];
}

int	main()
{
	int	n;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &arr1[i]);
	sort(1, n);
	for (int i = 1; i <= n; i++)
		printf("%d\n", arr1[i]);
}
