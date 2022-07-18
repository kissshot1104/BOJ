#include<stdio.h>

int stack[10001];
int p = -1;
void push(int data)
{
	stack[++p] = data;
}

int pop()
{
	if (p == -1)
	{
		return -1;
	}
	return stack[p--];
}

int main()
{
	int n, k, sub;
	int res = 1;
	scanf("%d %d", &n, &k);

	while (n!= 0)
	{
		sub = (n % k);
		if (sub >= 10)
		{
			sub += 55;
		}
		else
		{
			sub += '0';
		}
		push(sub);

		n /= k;
	}

	while (true)
	{
		res = pop();
		if (res == -1)
		{
			break;
		}
		printf("%c", (char)res);
	}
	
}

/*
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int stack[100], top=-1;

void push(int x){
	stack[++top]=x;
}
int pop(){
	return stack[top--];
}

int main(){
	freopen("input.txt", "rt", stdin);
	int n, k;
	char str[20]="0123456789ABCDEF";
	scanf("%d %d", &n, &k);
	while(n>0){
		push(n%k);
		n=n/k;
	}
	while(top!=-1){
		printf("%c", str[pop()]);
	}
	return 0;
}


*/