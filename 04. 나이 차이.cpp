#include<stdio.h>

int main()
{
	int max = 0;
	int min = 101;
	int n, age;

	scanf("%d", &n);

	for (int i = 0; i < n; i++ )
	{
		scanf("%d", &age);

		if (max < age)
		{
			max = age;
		}

		if (min > age)
		{
			min = age;
		}
	}

	printf("%d", max - min);
}