#include<stdio.h>

int arr[1501];

int main()
{
	int n;
	scanf("%d", &n);

	int p2, p3, p5;
	int min;

	p2 = p3 = p5 = 1;
	arr[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		min = 999999999;

		if (arr[p2] * 2 < arr[p3] * 3)
		{
			min = arr[p2]*2;
		}
		else
		{
			min = arr[p3]*3;
		}

		if (min > arr[p5] * 5)
		{
			min = arr[p5]*5;
		}
		
		if (min == arr[p2]*2)
		{
			p2++;
		}
		if (min == arr[p3]*3)
		{
			p3++;
		}
		if (min == arr[p5]*5)
		{
			p5++;
		}

		arr[i] = min;
	}

	printf("%d", arr[n]);

}








/*#include<stdio.h>

int main()
{
	int n, res;
	int cnt = 2;
	
	scanf("%d", &n);

	for (int i = 3;; i++)
	{
		res = i;
		while (res != 1)
		{
			if (res % 2 == 0)
			{
				res /= 2;
			}
			else if (res % 3 == 0)
			{
				res /= 3;
			}
			else if (res % 5 == 0)
			{
				res /= 5;
			}
			else
			{
				break;
			}
		}
		if (res == 1)
		{
			cnt++;
		}
		if (cnt == n)
		{
			printf("%d\n", i);
			return 0;
		}

	}

}*/