#include<stdio.h>

int arr[11];
int flag_arr[11];
int n,flag;

void DFS(int l)
{

	if (l == n + 1)
	{
		int one=0;
		int zero=0;
		for (int i = 0; i < n; i++)
		{
			if (flag_arr[i] == 1)
			{
				one += arr[i];
			}
			else if(flag_arr[i] == 0)
			{
				zero += arr[i];
			}
		}

		if (one == zero && one != 0 && zero != 0)
		{
			flag = true;
		}
		return;
	}

	flag_arr[l] = 1;
	DFS(l + 1);
	flag_arr[l] = 0;
	DFS(l + 1);
}

int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	DFS(1);

	if (flag == true)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}


/*
#include<stdio.h>
int n, a[11], total=0;
bool flag=false;
void DFS(int L, int sum){
	if(sum>(total/2)) return;
	if(flag==true) return;
	if(L==n+1){
		if(sum==(total-sum)){
			flag=true;
		}
	}
	else{
		DFS(L+1, sum+a[L]);
		DFS(L+1, sum);
	}
}
int main(){
	freopen("input.txt", "rt", stdin);
	int i;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		total+=a[i];
	}
	DFS(1, 0);
	if(flag) printf("YES\n");
	else printf("NO\n");
	return 0;
}
*/