#include <stdio.h>
#include <stdlib.h>

int *push_sorted (int *tab, int size, int push)
{
	int *tab1;
	int i = size - 1;
	int j = 0;

	tab1 = malloc(sizeof(int) * (size));
	while (tab[i] > push)
	{
		tab1[i + 1] = tab[i];
		i--;
	}
	tab1[i + 1] = push;
	while (j <= i)
	{
		tab1[j] = tab[j];
		j++;
	}
	return (tab1);
}

int	*push_specific (int *tab, int i, int pos, int push)
{
	int flag;
	int j = i - 1;
	int poss = pos - 1;

	flag = 0;
	while (j >= poss && flag == 0)
	{
		if (j == poss)
		{
			tab[j + 1] = tab[j];
			tab[j] = push;
			flag = 1;
		}
		else if (j != poss)
			tab[j + 1] = tab[j];
		j--;
	}
	return (tab);
}

int main()
{
	int i;
	int tab[5] = {-5, 10, 100, 1002, 99999};
	int *tab1;

	i = 0;
//	tab1 = push_specific(tab, 5, 5, 109);
	tab1 = push_sorted(tab, 5, -6);
	while (i <= 6)
	{
		if (i == 6 - 1)
			printf("%d", tab1[i]);
		else if (i < 6 - 1)
			printf("%d, ", tab1[i]);
		i++;
	}
	printf ("\n");
	return (0);
}
