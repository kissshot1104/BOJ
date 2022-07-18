#include<stdio.h>

int main()
{
	int arr[50001] = { 0, };

	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j+=i)
		{
			arr[j]++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}

}


/*#include<stdio.h>
using namespace std;
int cnt[50001];
int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=i; j<=n; j=j+i){
			cnt[j]++;
		}
	}
	for(i=1; i<=n; i++){
		printf("%d ", cnt[i]);
	}
	return 0;
}*/

