#include<stdio.h>

int main()
{
	char str[15] = { 0, };
	int age;
	char sex;
	scanf("%s", str);

	age = 1900 + (str[0] - '0') * 10 + str[1] - '0';

	if (str[7] == '3' || str[7] == '4')
	{
		age += 100;
	}

	age = 2019 - age;
	age++;
	if (str[7] == '1' || str[7] == '3')
	{
		printf("%d M\n", age);
	}
	else 
	{
		printf("%d W\n", age);
	}
	
}