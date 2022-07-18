#include<stdio.h>

int main()
{
	int n, m;
	int sum = 0;
	scanf("%d %d", &n, &m);

	for (int i = m; i <= n; i+=m)
	{
		sum += i;
	}

	printf("%d", sum);
}