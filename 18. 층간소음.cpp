#include<stdio.h>

int main()
{
	int n, m, sound;
	int cnt = 0,max_cnt=0;
	scanf("%d %d", &n,&m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &sound);

		if (sound > m)
		{
			cnt++;
			if (max_cnt < cnt)
			{
				max_cnt = cnt;
			}
		}
		else
		{
			cnt = 0;
		}
	}

	if (max_cnt == 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d", max_cnt);
	}
	
}

/*
lude<stdio.h>
int main(){
	//freopen("input.txt", "rt", stdin);
	int n, val, i, num, cnt=0, max=-2147000000;
	scanf("%d %d", &n, &val);
	for(i=1; i<=n; i++){
		scanf("%d", &num);
		if(num>val) cnt++;
		else cnt=0;
		if(cnt>max) max=cnt;
	}
	printf("%d\n", max);
	return 0;
}
*/