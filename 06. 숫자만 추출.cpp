#include<stdio.h>

int main()
{
	char str[51] = { 0, };
	int num=0,cnt=0;

	scanf("%s", str);

	for (int i = 0; str[i] != 0; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num *= 10;
			num += str[i] - '0';
		}
	}

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cnt++;
		}
	}

	printf("%d\n", num);
	printf("%d\n", cnt);
}