#include<stdio.h>

int main()
{
	char str[101] = { 0, };

	scanf("%[^\n]", str);

	for (int i = 0; str[i] != 0; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else if (str[i] == ' ')
		{
			continue;
		}
		printf("%c", str[i]);
	}

}

/*
#include<stdio.h>
using namespace std;
int main(){
	//freopen("input.txt", "rt", stdin);
	char a[101], b[101];
	int i, p=0;
	gets(a);
	for(i=0; a[i]!='\0'; i++){
		if(a[i]!=' '){
			if(a[i]>=65 && a[i]<=90){
				b[p++]=a[i]+32;
			}
			else b[p++]=a[i];
		}
	}
	b[p]='\0';
	printf("%s\n", b);
	return 0;
}

*/