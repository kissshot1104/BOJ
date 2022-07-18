#include<iostream>

int result[1001];

int main()
{
	int n;
	int cnt = 0;
	int sub_i;
	scanf("%d", &n);


	for (int i = 2; i <= n; i++)
	{
		sub_i=i;
		for (int j = 2; j <= i;)
		{
			
			if (sub_i % j == 0)
			{
				sub_i /= j;
				result[j]++;
			}
			else
			{
				j++;
			}
		}
	}

	printf("%d", result[5]);
	
}