#include<stdio.h>
#include<string.h>

int    main()
{
    int		n, cnt;
    char	str[51];

    scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0;j < 51; j++)
			str[j] = 0;
		cnt = 0;
		scanf("%s", str);
		for (unsigned long j = 0;j < strlen(str); j++)
		{
			if (str[j] == '(')
				cnt++;
			else
				cnt--;
			if (cnt < 0)
				break;
		}
		if (cnt == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
