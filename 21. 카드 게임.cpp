#include<stdio.h>

int main()
{
	int player1[10] = { 0, };
	int palyer2,last=0;
	int score1=0, score2=0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &player1[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &palyer2);

		if (player1[i] == palyer2)
		{
			score1 += 1;
			score2 += 1;
		}
		else if (player1[i] > palyer2)
		{
			score1 += 3;
			last = 1;
		}
		else
		{
			score2 += 3;
			last = 2;
		}

	}

	printf("%d %d\n", score1, score2);

	if (last == 0)
	{
		printf("D\n");
	}
	else if (score1 >= score2 && last == 1)
	{
		printf("A\n");
	}
	else
	{
		printf("B\n");
	}

}

/*
#include<stdio.h>
int main(){
	//freopen("input.txt", "rt", stdin);
	int i, A[10], B[10], as=0, bs=0, lw=0;
	for(i=0; i<10; i++){
		scanf("%d", &A[i]);
	}
	for(i=0; i<10; i++){
		scanf("%d", &B[i]);
	}
	for(i=0; i<10; i++){
		if(A[i]>B[i]){
			as=as+3;
			lw=1;
		}
		else if(A[i]<B[i]){
			bs=bs+3;
			lw=2;
		}
		else{
			as+=1;
			bs+=1;
		}
	}
	printf("%d %d\n", as, bs);
	if(as==bs){
		if(lw==0) printf("D\n");
		else if(lw==1) printf("A\n");
		else printf("B\n");
	}
	else if(as>bs) printf("A\n");
	else printf("B\n");
	return 0;
}
*/