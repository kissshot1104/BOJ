#include<stdio.h>
#include<string.h>

int main()
{
	char	str[101]={0};
	char	dic[][4] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
	int		len;
	int		cnt = 0;

	scanf("%s", str);
	for (int i = 0; i < 8; i++)
	{
		len = strlen(dic[i]);
		for (char *ptr = strstr(str, dic[i]); ptr != 0; ptr = strstr(ptr + 1, dic[i]))
		{
			for (int j = 0; j < len; j++)
				ptr[j] = '`';
			cnt++;
		}
	}
	for (int j = 0; str[j]; j++)
		if (('a' <= str[j] && str[j] <= 'z') || str[j] == '-' || str[j] == '=')
			cnt++;
	printf("%d\n", cnt);
}
