#include<stdio.h>

int stack[30];
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

int top()
{
	if (p == -1)
	{
		return -1;
	}
	return stack[p];
}

int main()
{
	int n, m;
	char log[60] = { 0, };
	int l_pos = 0,cnt=1;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		push(m);
		log[l_pos++] = 'P';
		while (true)
		{
			if (top() == -1)
			{
				break;
			}
			else if (cnt == top())
			{
				pop();
				log[l_pos++] = 'O';
				cnt++;
			}
			else
			{
				break;
			}
		}
	}
	for (int i = 0; i < n*2; i++)
	{
		printf("%c", log[i]);
	}
}