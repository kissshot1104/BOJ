#include<stdio.h>

int main()
{
	int n, k,index,cnt;
	int prince[1001];

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
	{
		prince[i] = 1;
	}

	index = k-1;
	cnt = n;
	while (cnt != 1)
	{
		if (prince[index] == 1)
		{
			prince[index] = 0;
			cnt--;
		}

		for (int i = 0; i < k; i++)
		{
			index++;
			while (index >= n)
			{
				index -= n;
			}
			
			while (prince[index] == 0)
			{
				index++;
				while (index >= n)
				{
					index -= n;
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (prince[i] == 1)
		{
			printf("%d\n", i+1);
		}
	}
		
}


/*#include<stdio.h>
#include<vector>
using namespace std;
int main(){
	//freopen("input.txt", "rt", stdin);
	int n, k, pos=0, i, cnt=0;
	scanf("%d %d", &n, &k);
	vector<int> prince(n+1);
	while(1){
		for(i=1; i<=k; i++){
			while(1){
				pos++;
				if(pos>n) pos=1;
				if(prince[pos]==0) break;
			}
		}
		prince[pos]=1;
		cnt++;
		if(cnt==n-1) break;
	}
	for(i=1; i<=n; i++){
		if(prince[i]==0){
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}*/

