#include<stdio.h>

int main()
{
	int n;
	int sub_i;
	int cnt = 0;
	scanf("%d", &n);

	
	for (int i = 3; i <= n; i++)
	{
		sub_i = i;

		while (sub_i!=0)
		{
			if (sub_i % 10 == 3)
			{
				cnt++;
			}
			
			sub_i /= 10;
		}
	}

	printf("%d", cnt);
}