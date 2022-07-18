#include<stdio.h>

char stack[31];
int p = -1;

void push(char data)
{
	stack[++p] = data;
}
char pop()
{
	if (p == -1)
	{
		return -1;
	}
	return stack[p--];
}

int main()
{
	char str[31] = { 0, };
	int cnt = 0;
	char c=1;
	int i;
	scanf("%s",str);

	for (i = 0; str[i] != 0; i++)
	{
		push(str[i]);
	}
	if (str[0] == ')' || str[i - 1] == '(')
	{
		printf("NO\n");
		return 0;
	}
	while (c!= -1)
	{
		c = pop();
		if (c == '(')
		{
			cnt++;
		}
		else if (c == ')')
		{
			cnt--;
		}
	}

	if (cnt == 0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

}


/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("input.txt", "rt", stdin);
	stack<char> s;
	string str;
	cin>>str;
	for(auto x : str){
		if(x=='(') s.push(x);
		else{
			if(s.empty() || s.top()!='('){
				cout<<"NO";
				return 0;
			}
			s.pop();
		}
	}
	if(s.empty()) cout<<"YES";
	else cout<<"NO";
	return 0;
}
*/