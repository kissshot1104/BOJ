#include<stdio.h>

int main()
{
	int s,n;
	int work[1001] = { 0, };
	int key;
	int hit = -1;
	scanf("%d", &s);
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &key);
		hit = -1;
		for (int j = 0; j < s; j++)
		{
			
			if (key == work[j])
			{
				hit = j;
			}
		}

		if (hit == -1)
		{
			for (int j = s; j > 0; j--)//-n
			{
				work[j] = work[j - 1];
			}
		}
		else
		{
			for (int j = hit; j > 0; j--)
			{
				work[j] = work[j - 1];
			}
			
		}
		work[0] = key;
	}

	
	for (int i = 0; i < s; i++)
	{
		printf("%d ", work[i]);
	}

}

/*
#include <stdio.h>
int C[20];
int main() {
	freopen("input.txt", "rt", stdin);
	int s, n, a, i, j, pos;
	scanf("%d %d", &s, &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a);
		pos=-1;
		for(j=0; j<s; j++) if(C[j]==a) pos=j;
		if(pos==-1){
			for(j=s-1; j>=1; j--) C[j]=C[j-1];
		}
		else{
			for(j=pos; j>=1; j--) C[j]=C[j-1];
		}
		C[j]=a;
	}
	for(i=0; i<s; i++) printf("%d ", C[i]);
	return 0;
}
*/