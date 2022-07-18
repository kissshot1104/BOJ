#include<stdio.h>

int main()
{

	char str[101] = { 0, };
	int n_arr[11] = { 0, };
	int max = 0, digit_max = 0;

	scanf("%s", str);
	
	for (int i = 0; str[i] != 0; i++)
	{
		n_arr[str[i] - '0']++;
	}

	for (int i = 0; i <= 9; i++)
	{
		if (max <= n_arr[i])
		{
			max = n_arr[i];

			if (digit_max < i)
			{
				digit_max = i;
			}

		}
	}

	printf("%d\n", digit_max);

}

/*

#include<stdio.h>
int ch[10];
int main(){
	//freopen("input.txt", "rt", stdin);
	int i, digit, max=-2147000000, res;
	char a[101];
	scanf("%s", &a);
	for(i=0; a[i]!='\0'; i++){
		digit=a[i]-48;
		ch[digit]++;
	}
	for(i=0; i<=9; i++){
		if(ch[i]>=max){
			max=ch[i];
			res=i;
		}
	}
	printf("%d\n", res);
	return 0;
}





*/