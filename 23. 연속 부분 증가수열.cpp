#include<stdio.h>

int main()
{
	int n;
	int max, cnt,input,max_cnt;
	scanf("%d", &n);

	cnt = 0;
	max = 0;
	max_cnt = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input);

		if (max <= input)
		{
			max = input;
			cnt++;
		}
		else
		{
			if (max_cnt < cnt)
			{
				max_cnt = cnt;
			}
			cnt = 1;
			max = input;
		}
	}
	if (max_cnt < cnt)
	{
		max_cnt = cnt;
	}

	printf("%d", max_cnt);
	
}

/*#include<stdio.h>			
int main() {
	freopen("input.txt", "rt", stdin);
	int n, i, pre, now, cnt, max;
	scanf("%d", &n);
	scanf("%d", &pre);
	cnt = 1;
	max = 1;
	for (i = 2; i <= n; i++) {
		scanf("%d", &now);
		if (now >= pre) {
			cnt++;
			if (cnt > max) max = cnt;
		}
		else cnt = 1;
		pre = now;
	}
	printf("%d\n", max);
	return 0;
}*/