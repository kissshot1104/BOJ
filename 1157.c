#include<stdio.h>
#include<string.h>

int	main()
{
	unsigned char	buf[1000001]={0};
	int check[256] = {0};
	int	len;
	int max = 0;
	unsigned char max_idx;

	scanf("%s", buf);
	len = strlen((char *)buf);
	for (int i = 0; i < len ; i++)
	{
		if ('a' <= buf[i] && buf[i] <= 'z')
			buf[i] -= 32;
		check[buf[i]]++;
	}
	for (int i = 0; i < 256; i++)
	{
		if (max < check[i])
		{
			max = check[i];
			max_idx = i;
		}
	}
	for (int i = 0; i < 256; i++)
	{
		if (i == max_idx)
			continue;
		else if (max == check[i])
		{
			printf("?");
			return (0);
		}
	}
	printf("%c", max_idx);
}
