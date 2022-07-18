#include<stdio.h>

int main()
{
	int sum = 0;
	int n;
	int num=1;
	int cnt = 0;
	int digit = 9;

	scanf("%d", &n);

	while (sum + digit < n)
	{
		sum += digit;
		cnt += digit * num;
		digit *= 10;
		num++;
	}

	digit = n - sum;
	cnt += digit * num;

	printf("%d\n", cnt);

}

/*
#include<stdio.h>
int main(){
	freopen("input.txt", "rt", stdin);
	int n, sum=0, cnt=1, digit=9, res=0;
	scanf("%d", &n);
	while(sum+digit<n){
		sum=sum+digit;
		res=res+(cnt*digit);
		cnt++;
		digit=digit*10;
	}
	res=res+((n-sum)*cnt);
	printf("%d\n", res);
	return 0;
}
*/