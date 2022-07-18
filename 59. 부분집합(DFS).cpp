#include<stdio.h>
int arr[11];
int n;

void DFS(int d)
{
	if (d > n)
	{
		for (int i = 1; i <= n; i++)
		{
			if (arr[i] == 1)
			{
				printf("%d ", i);
			}
		}
		printf("\n");
		return;
	}

	arr[d] = 1;
	DFS(d + 1);
	arr[d] = 0;
	DFS(d + 1);


}

int main()
{

	scanf("%d", &n);

	DFS(1);

	
}