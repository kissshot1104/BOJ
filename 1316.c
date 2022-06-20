#include<stdio.h>
#include<string.h>

int	main()
{
	int				n, buf_len;
	unsigned char	cur_in;
	unsigned char	buf[101] = {};
	int				check[256]={};
	int				cnt = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", buf);
		buf_len = strlen((char *)buf);
		for(int j = 0; j < buf_len; j++)
		{
			if (check[buf[j]] != 0 && cur_in != buf[j])
				break ;
			cur_in = buf[j];
			check[buf[j]]++;
			if (buf_len == j + 1)
				cnt++;
		}
		for (int j = 0; j < 256; j++)
			check[j] = 0;
	}
	printf("%d\n", cnt);
}
