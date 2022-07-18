#include<stdio.h>

void Recursive(int n)
{
	if (n == 0)
	{
		return;
	}
	Recursive(n / 2);
	printf("%d", n % 2);
}

int main()
{
	int n;
	scanf("%d", &n);
	Recursive(n);
}