#include<stdio.h>

int main()
{
	int	arr[1001] = {0};
	int	n, k, back;
	int front = 0;

	scanf("%d %d", &n, &k);
	for (back = 0; back < n; back++)
		arr[back] = back + 1;
	printf("<");
	for (int i = 1;; i++)
	{
		if (i % k != 0)
			arr[back++] = arr[front++];
		else
		{
			printf("%d", arr[front++]);
			if (--n)
				printf(", ");
			else
				break ;
		}
		if (1001 <= front)
			front = 0;
		if (1001 <= back)
			back = 0;
	}
	printf(">\n");
}
