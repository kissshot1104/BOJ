
#include<stdio.h>

int arr[1001];
int result[1001];
int prime[1001];
int main()
{
	int n;
	bool flag;
	int sum = 0;
	int cnt = 0;
	scanf("%d", &n);

	printf("%d! = ", n);

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
			arr[i]=1;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (arr[i] == 1)
		{
			prime[cnt++] = i;
		}
	}
	int sub_i;
	for (int i = 2; i <= n; i++)
	{
		sub_i = i;
		cnt = 0;
		while (sub_i != 1)
		{
			if (sub_i % prime[cnt] == 0)
			{
				result[prime[cnt]]++;
				sub_i /= prime[cnt];
			}
			else
			{
				cnt++;
			}
		}
	}
	
	for (int i = 0; i <= n; i++)
	{
		if (result[i] != 0)
		{
			printf("%d ", result[i]);
		}
	}

}