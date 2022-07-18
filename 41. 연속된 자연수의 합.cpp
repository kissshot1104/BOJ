#include<stdio.h>

int main()
{
	int n;
	int sub_n;
	scanf("%d", &n);
	int cnt = 1;
	int cnt2 = 0;
	int i;
	sub_n = n-cnt;
	while (sub_n>0)
	{
		cnt++;
		sub_n -= cnt;
		
		if (sub_n % cnt == 0)
		{
			
			for (i = 1; i < cnt; i++)
			{
				printf("%d + ", i + sub_n / 2);
			}
			printf("%d = %d\n",i+sub_n/2, n);
			cnt2++;
		}
	}
	printf("%d\n", cnt2);
}

/*#include<stdio.h>

int main()
{
	int n;
	int cnt=0;
	scanf("%d", &n);

	int sub_n;

	for (int i = 2; i <= n/2; i++)
	{
		sub_n = n;
		for (int j = 1; j <= i; j++)
		{
			sub_n -= j;
		}

		if (sub_n % i == 0)
		{
			if (1 + (sub_n / i) <= 0)
			{
				continue;
			}

			printf("%d", 1 + (sub_n / i));
			for (int j = 2; j <= i; j++)
			{
				printf(" + %d", j + (sub_n / i));
			}
			printf(" = %d\n",n);
			cnt++;
		}
	}

	printf("%d\n", cnt);
}*/

/*
#include<stdio.h>
int main(){
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
	int a, b=1, cnt=0, tmp, i;
	scanf("%d", &a);
	tmp=a;
	a--;
	while(a>0){
		b++;
		a=a-b;
		if(a%b==0){
			for(i=1; i<b; i++){
				printf("%d + ", (a/b)+i);
			}
			printf("%d = %d\n", (a/b)+i, tmp);
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
*/