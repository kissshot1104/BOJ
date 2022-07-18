#include<stdio.h>

int digit_sum(int x)
{
	int digit, sum,sub_digit;
	int max_digit = 0,max_sum=0;

	for (int i = 0; i < x; i++)
	{
		sum = 0;
		scanf("%d", &digit);
		sub_digit = digit;
		while (sub_digit)
		{
			sum += sub_digit % 10;
			sub_digit /= 10;
		}

		if (max_sum < sum)
		{
			max_digit = digit;
			max_sum = sum;
		}
		else if (max_sum == sum)
		{
			if (max_digit < digit)
			{
				max_digit = digit;
			}
		}
	}

	return max_digit;
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d",digit_sum(n));
}

/*
#include<stdio.h>
int digit_sum(int x){
	int sum=0, tmp;
	while(x>0){
		tmp=x%10;
		sum=sum+tmp;
		x=x/10;
	}
	return sum;
}

int main(){
	freopen("input.txt", "rt", stdin);
	int n, num, i, sum, max=-2147000000, res;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &num);
		sum=digit_sum(num);
		if(sum>max){
			max=sum;
			res=num;
		}
		else if(sum==max){
			if(num>res) res=num;
		}
	}
	printf("%d\n", res);
	return 0;
}
*/