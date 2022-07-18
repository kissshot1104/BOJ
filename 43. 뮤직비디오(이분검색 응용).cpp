#include<stdio.h>

int main()
{
	int arr[1001] = { 0, };
	int n, m;
	int rt, lt,mid,cnt,res;
	int sum = 0;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	lt = 0;
	rt = sum;
	
	while (lt <= rt)
	{
		cnt = 1;
		sum = 0;
		mid = (lt + rt) / 2;
		for (int i = 0; i < n; i++)
		{
			if (sum + arr[i] > mid)
			{
				cnt++;
				sum = arr[i];
			}
			else
			{
				sum += arr[i];
			}
		}
		if (cnt <= m)
		{
			res = mid;
			rt = mid - 1;
		}
		else
		{
			
			lt = mid + 1;
		}

	}

	printf("%d\n", res);
}

























/*#include<stdio.h>
int arr[1001];
int n;


int Count(int size)
{
	int i, cnt = 1, sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (sum + arr[i] > size)
		{
			cnt++;
			sum = arr[i];
		}
		else
		{
			sum += arr[i];
		}

	}
	return cnt;
}

int main()
{
	

	int m, i, lt = 0, rt = 0, mid, res;
	
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		rt += arr[i];
	}

	while (lt <= rt)
	{
		mid = (lt + rt) / 2;
		if (Count(mid)<= m)
		{
			res = mid;
			rt = mid - 1;
		}
		else
		{
			lt = mid + 1;
		}
	}

	printf("%d", res);
}
*/