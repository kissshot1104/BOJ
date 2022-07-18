#include<stdio.h>


int reverse(int x)
{
	int digit = 0;

	while (x)
	{
		digit *= 10;
		digit += x % 10;
		x /= 10;
	}
	return digit;
}

bool isPrime(int x)
{
	if (1 == x)
	{
		return false;
	}
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{

	int cnt, n, num;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);

		num = reverse(num);
		if (isPrime(num))
		{
			printf("%d ", num);
		}	
	}
}

/*
#include<stdio.h>

int reverse(int x){
	int res=0, tmp;
	while(x>0){
		tmp=x%10;
		res=res*10+tmp;
		x=x/10;
	}
	return res;
}

bool isPrime(int x){
	int i;
	if(x==1) return false;
	bool flag=true;
	for(i=2; i<x; i++){
		if(x%i==0){
			flag=false;
			break;
		}
	}
	return flag;
}

int main(){
	freopen("input.txt", "rt", stdin);
	int n, num, i, tmp;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &num);
		tmp=reverse(num);
		if(isPrime(tmp)) printf("%d ", tmp);
	}
	return 0;
}
*/