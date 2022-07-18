#include<stdio.h>

int main()
{
	int n;
	int pos = 1;
	int sum = 0;
	int last_digit = 0;
	scanf("%d", &n);
	

	while (n)
	{
		
		if (n % 10 < 3)
		{
			sum += n / 10 * pos;
		}
		else if (n % 10 > 3)
		{
			sum += (n / 10 + 1) * pos;
		}
		else
		{
			sum += (n / 10 * pos) + last_digit+1;
		}

		last_digit += n % 10 * pos;
		n /= 10;
		pos *= 10;
	}
	printf("%d\n", sum);
}