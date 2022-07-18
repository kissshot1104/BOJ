#include<stdio.h>

int main()
{
	int min = 99999999;

	int n,index,tmp;
	int arr[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n ; i++)
	{
		index = i;
		for (int j = index; j < n; j++)
		{
			if (arr[index] > arr[j])
			{
				index = j;
			}
		}
		tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

/*
#include<stdio.h>
int main() {
	freopen("input.txt", "rt", stdin);
	int a[101], n, tmp, idx, i, j;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n-1; i++){
		idx=i;
		for(j=i+1; j<n; j++){
			if(a[j]<a[idx]) idx=j;
		}
		tmp=a[i];
		a[i]=a[idx];
		a[idx]=tmp;
	}
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}

*/