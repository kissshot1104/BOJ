#include<stdio.h>

int arr[11];
int flag_arr[11];

int n, m,cnt;

void DFS(int l,int sum)
{
	if (l == n)
	{
		if (sum == m)
		{
			cnt++;
		}

		return;
	}
	
	DFS(l + 1, sum + arr[l]);
	DFS(l + 1, sum);
	DFS(l + 1, sum - arr[l]);
}

int main()
{
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	DFS(0, 0);

	printf("%d\n", cnt);
}