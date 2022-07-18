#include<stdio.h>

int front_arr[8];
int middle_arr[8];
int back_arr[8];

void DFS(int n)
{
	
	if (n > 7)
	{
		return;
	}


	front_arr[n] = n;
	DFS(n * 2);
	middle_arr[n] = n;
	DFS(n * 2 + 1);
	back_arr[n] = n;

}

int main()
{

	DFS(1);

	for (int j = 1; j < 8; j++)
	{
		printf("%d ", front_arr[j]);
	}
	printf("\n");
	for (int j = 1; j < 8; j++)
	{
		printf("%d ", middle_arr[j]);
	}
	printf("\n");
	for (int j = 1; j <8; j++)
	{
		printf("%d ", back_arr[j]);
	}
}