#include<stdio.h>

int map[701][701];
int d_map[701][701];

int main()
{
	int h, w, c, r, sub_max;
	int  max = 0;

	scanf("%d %d", &h, &w);

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			scanf("%d", &map[i][j]);
			d_map[i][j] = d_map[i - 1][j] + d_map[i][j - 1] - d_map[i - 1][j - 1] + map[i][j];
		}
	}
	scanf("%d %d", &c, &r);

	for (int i = c; i <= h; i++)
	{
		for (int j = r; j <= w; j++)
		{
			sub_max = d_map[i][j] + d_map[i - c][j - r] - d_map[i][j - r] - d_map[i - c][j];
			if (max < sub_max)
			{
				max = sub_max;
			}
		}
	}

	printf("%d\n", max);

	return 0;
}

/*
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int a[701][701], dy[701][701];
int main(){
	freopen("input.txt", "rt", stdin);
	int h, w, n, m, i, j, tmp, max=-2147000000;
	scanf("%d %d", &h, &w);
	for(i=1; i<=h; i++){
		for(j=1; j<=w; j++){
			scanf("%d", &a[i][j]);
			dy[i][j]=dy[i-1][j]+dy[i][j-1]-dy[i-1][j-1]+a[i][j];
		}
	}
	scanf("%d %d", &n, &m);
	for(i=n; i<=h; i++){
		for(j=m; j<=w; j++){
			tmp=dy[i][j]-dy[i-n][j]-dy[i][j-m]+dy[i-n][j-m];
			if(tmp>max) max=tmp;
		}
	}
	printf("%d\n", max);
	return 0;
}
*/