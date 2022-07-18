#include<stdio.h>

int main()
{
	int n,j;
	int arr[101] = { 0, }, cnt_arr[101] = { 0, };
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &cnt_arr[i]);
	}

	for (int i = n; i >= 0; i--)
	{
		for (j = i; j < i + cnt_arr[i]; j++)
		{
			arr[j] = arr[j + 1];
		}

		arr[j] = i;
	}

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}

}




/*#include<stdio.h>

int main()
{
	int n,cnt,j;
	int arr[101] = { 0, }, cnt_arr[101] = { 0, };
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &cnt_arr[i]);
		cnt = 0;

		if (cnt_arr[i] == 0)
		{
			for (int j = 1; j <= n; j++)
			{
				if (arr[j] == 0)
				{
					arr[j] = i;
					break;
				}
			}
			continue;
		}

		for (j = 1; j <= n; j++)
		{

			if (arr[j] == 0 || arr[j] > i)
			{
				cnt++;

				if (cnt == cnt_arr[i])
				{
					break;
				}
			}
		}
		if (arr[j + 1] == 0)
		{
			arr[j + 1] = i;
		}
		else
		{
			while (arr[j + 1] != 0)
			{
				j++;
			}
			arr[j + 1] = i;
		}

	}

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}
}*/




























/*
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	freopen("input.txt", "rt", stdin);
	int n, i, j, pos;
	scanf("%d", &n);
	vector<int> is(n+1), os(n+1);
	for(i=1; i<=n; i++){
		scanf("%d", &is[i]);
	}
	for(i=n; i>=1; i--){
		pos=i;
		for(j=1; j<=is[i]; j++){
			os[pos]=os[pos+1];
			pos++;
		}
		os[pos]=i;
	}
	for(i=1; i<=n; i++){
		printf("%d ", os[i]);
	}
	return 0;
}
*/