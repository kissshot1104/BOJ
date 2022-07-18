#include<stdio.h>

int xi[200001];

int main()
{
	int lt, rt, mid, key, j, res, n, c, cnt, pre;

	scanf("%d %d", &n,&c);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &xi[i]);
	}

	for (int i = 1; i < n; i++)
	{
		key = xi[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (key < xi[j])
			{
				xi[j + 1] = xi[j];
			}
			else
			{
				break;
			}
		}

		xi[j + 1] = key;

	}

	lt = xi[0];
	rt = xi[n-1];

	while(lt <= rt)
	{
		mid = (lt + rt) / 2;
		cnt = 1;
		pre = xi[0];

		for (int i = 1;i<n ; i++)
		{
			if (xi[i] - pre >= mid)
			{
				cnt++;
				pre = xi[i];
			}
		}

		if (cnt < c)
		{
			rt = mid - 1;
			
		}
		else if (cnt >= c)
		{
			lt = mid + 1;
			res = mid;
		}
	}

	printf("%d\n", res);

}


/*
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int n;
int Count(int len, int x[]){
	int i, cnt=1, pos=x[1];
	for(i=2; i<=n; i++){
		if(x[i]-pos>=len){
			cnt++;
			pos=x[i];
		}
	}
	return cnt;
}
int main(){
	//freopen("input.txt", "rt", stdin);
	int m, i, lt=1, rt, mid, res;
	scanf("%d %d", &n, &m);
	int *x = new int[n+1];
	for(i=1; i<=n; i++){
		scanf("%d", &x[i]);
	}
	sort(x+1, x+n+1);
	rt=x[n];
	while(lt<=rt){
		mid=(lt+rt)/2;
		if(Count(mid, x)>=m){
			res=mid;
			lt=mid+1;
		}
		else rt=mid-1;
	}
	printf("%d\n", res);
	delete[] x;
	return 0;
}
*/