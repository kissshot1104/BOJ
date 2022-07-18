#include<stdio.h>

int main()
{
	char str1[101] = { 0, },str2[101],arr1[52] = { 0, },arr2[52] = { 0, };
	int i;

	scanf("%s", str1);
	scanf("%s", str2);

	for (i = 0; str1[i] != 0; i++)
	{
		if (str2[i] == 0)
		{
			printf("NO\n");
			return 0;
		}

		if (str1[i] >= 'a' && str1[i] <= 'z')
		{
			arr1[str1[i] - 'A' - 6]++;
		}

		if (str2[i] >= 'a' && str2[i] <= 'z')
		{
			arr2[str2[i] - 'A' - 6]++;
		}

		if (str1[i] >= 'A' && str1[i] <= 'Z')
		{
			arr1[str1[i] - 'A']++;
		}

		if (str2[i] >= 'A' && str2[i] <= 'Z')
		{
			arr2[str2[i] - 'A']++;
		}

	}

	for (int i = 0; i < 52; i++)
	{
		if (arr2[i] != arr1[i])
		{
			printf("NO");
			return 0;
		}
		
	}
	printf("YES");
	
}

/*
#include<stdio.h>
#include<algorithm>
int a[60], b[60];
int main(){
	freopen("input.txt", "rt", stdin);
	int n, i;
	char str[100];
	scanf("%s", &str);
	for(i=0; str[i]!='\0'; i++){
		if(str[i]>=65 && str[i]<=90)
			a[str[i]-64]++;
		else a[str[i]-70]++;
	}

	scanf("%s", &str);
	for(i=0; str[i]!='\0'; i++){
		if(str[i]>=65 && str[i]<=90)
			b[str[i]-64]++;
		else b[str[i]-70]++;
	}

	for(i=1; i<=52; i++){
		if(a[i]!=b[i]){
			printf("NO\n");
			exit(0);
		}
	}
	printf("YES\n");
	return 0;
}
*/