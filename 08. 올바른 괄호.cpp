#include<stdio.h>

int main()
{
	int cnt = 0;
	char str[101] = { 0, };

	scanf("%s",str);

	for (int i = 0; str[i] != 0; i++)
	{
		if (str[i] == '(')
		{
			cnt++;
		}
		else if (str[i] == ')')
		{
			cnt--;
		}
		
		if (cnt < 0)
		{
			break;
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
#include<stdio.h>
using namespace std;
int main(){
	//freopen("input.txt", "rt", stdin);
	char a[100];
	int i, cnt=0;
	scanf("%s", &a);
	for(i=0; a[i]!='\0'; i++){
		if(a[i]=='(') cnt++;
		else if(a[i]==')') cnt--;
		if(cnt<0) break;
	}
	if(cnt==0) printf("YES\n");
	else printf("NO\n");
	return 0;
}
*/