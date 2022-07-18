#include<stdio.h>


int main()
{
	int n,pos;
	int arr[101] = { 0, };
	int now,pre;
	scanf("%d", &n);

	scanf("%d", &pre);

	for (int i = 1; i < n; i++)
	{
		scanf("%d", &now);
		pos = now - pre;

		if (pos < 0)
		{
			pos *= -1;
		}

		if (pos >= 0 && pos < n && arr[pos] == 0)
		{
			arr[pos] = 1;
		}
		else
		{
			printf("NO\n");
			return 0;
		}

		pre = now;

	}
	
	printf("YES\n");

}

/*
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n, i, now, pre, pos;
	scanf("%d", &n);
	vector<int> ch(n);
	scanf("%d", &pre);
	for(i=1; i<n; i++){
		scanf("%d", &now);
		pos=abs(pre-now);
		if(pos>0 && pos<n && ch[pos]==0) ch[pos]=1;
		else{
			printf("NO\n");
			return 0;
		}
		pre=now;
	}
	printf("YES\n");
	return 0;
}
*/