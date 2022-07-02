#include<stdio.h>
#include<string.h>

int	main()
{
	int		n;
	char	str[51] = {0};
	char	print_str[51] = {0};

	scanf("%d", &n);
	scanf("%s", print_str);
	for (int i = 1; i < n; i++)
	{
		scanf("%s", str);
		for (unsigned long j = 0; j < strlen(str) || j < strlen(print_str); j++)
			if (str[j] != print_str[j])
				print_str[j] = '?';
	}
	printf("%s\n",print_str);
}
