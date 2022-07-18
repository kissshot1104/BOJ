#include<stdio.h>

int main()
{
	int i, c=0, h=0,pos;
	char str[10] = { 0, };

	scanf("%s", str);

	if (str[1] == 'H')
	{
		c = 1;
		pos = 1;
	}
	else
	{
		for (i = 1; str[i] != 'H'; i++)
		{
			c = c * 10 + (str[i] - '0');
		}

		pos = i;
	}

	if (str[pos+1] == 0)
	{
		h = 1;
	}
	else
	{
		for (int i = pos + 1; str[i] != 0; i++)
		{
			h = h * 10 + (str[i] - '0');
		}
	}

	printf("%d", (c * 12) + h);


}