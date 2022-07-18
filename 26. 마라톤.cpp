#include<stdio.h>

int arr[10001];
int score[10001];
int main()
{
	int n;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j >=0; j--)
		{
			if (arr[i] <= arr[j])
			{
				score[i]++;
			}
		}
		printf("%d ", score[i]);
	}

}


/*
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	freopen("input.txt", "rt", stdin);
	int i, j, n, cnt=0;
	scanf("%d ", &n);
	vector<int> a(n+1);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	printf("1 ");
	for(i=2; i<=n; i++){
		cnt=0;
		for(j=i-1; j>=1; j--){
			if(a[j]>=a[i]) cnt++;
		}
		printf("%d ", cnt+1);
	}
	return 0;
}
*/