#include<stdio.h>
int main()
{
	int n, tmp;
	int arr[101];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - n; j++)
		{
			if (arr[j] > 0 && arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

}

/*#include<stdio.h>

int main()
{
	int n, tmp;
	int m_cnt = 0, p_cnt = 0;
	int arr[101] = { 0, }, m_arr[101] = { 0, }, p_arr[101] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (0 > arr[i])
		{
			m_arr[m_cnt++] = arr[i];
		}
		else
		{
			p_arr[p_cnt++] = arr[i];
		}
	}

	for (int i = 0; i < m_cnt; i++)
	{
		printf("%d ", m_arr[i]);
	}
	for (int i = 0; i < p_cnt; i++)
	{
		printf("%d ", p_arr[i]);
	}
}*/

















/*
#include<stdio.h>
int main() {
	freopen("input.txt", "rt", stdin);
	int a[101], n, tmp, min, i, j;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(a[j]>0 && a[j+1]<0){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}












#include<stdio.h>
void Special_Sort(int temp[], int len){
	int i, j, t;
	for(i=0; i<len; i++){
		for(j=0; j<len-i-1; j++){
			if(temp[j]>0 && temp[j+1]<0){
				t=temp[j];
				temp[j]=temp[j+1];
				temp[j+1]=t;
			}
		}
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
	int n, i;
	scanf("%d", &n);
	int *a=new int[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	Special_Sort(a, n);
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	delete[] a;
	return 0;
}
*/