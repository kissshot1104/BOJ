#include<stdio.h>

int main()
{
	bool flag;
	int n;
	int cnt = 0;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		flag = true;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}
		}

		if (flag == true)
		{
			cnt++;
		}
	}

	printf("%d\n", cnt);
}