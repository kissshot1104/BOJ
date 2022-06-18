#include<stdio.h>

int	check_func(int n)
{
	int	tot = n;

	while (n)
	{
		tot += n % 10;
		n /= 10;
	}
	return (tot);
}

int	main()
{
	int	check[10051] = {0};

	for (int i = 1; i < 10001; i++)
		check[check_func(i)] = 1;
	for (int i = 1; i < 10001; i++)
		if (check[i] == 0)
			printf("%d\n", i);
}
