#include <stdio.h>
#include <stdlib.h>

typedef struct s_human t_human;

typedef struct  s_human
{
	int	dead;
	int	n;
	t_human	*next;
}	t_human;

t_human	*add(int num)
{
	t_human* human = (t_human *)malloc(sizeof(t_human));
	human->n = num;
	human->dead = 0;
	human->next = 0;
	return human;
}

int	main()
{
	t_human	*tmp;
	t_human	*begin;
	int	cnt, n, k;

	scanf("%d", &n);
	scanf("%d", &k);
	if (n == 0)
		return (0);
	tmp = add(1);
	begin = tmp;
	for (int i = 1; i < n; i++)
	{
		tmp->next = add(i + 1);
		tmp = tmp->next;
	}
	tmp->next = begin;
	tmp = begin;
	cnt = 1;
	printf("<");
	while (n)
	{
		if (cnt == k && tmp->dead == 0)
		{
			printf("%d", tmp->n);
			tmp->dead = 1;
			n--;
			if (n == 0)
			{
				printf(">");
				return (0);
			}
			printf(", ");
			cnt = 1;
		}
		else if (tmp->dead == 0)
			cnt++;
		tmp = tmp->next;
	}
}
