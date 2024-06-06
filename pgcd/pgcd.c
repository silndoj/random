#include <cstdio>
#include <stdio.h>
#include <stdarg.h>

int		max(int* tab, int len)
{
	int i;
	int nr;
	
	i = 1;
	if (len = 0)
		return (0);
	nr = tab[0];
	while (i < len)
	{
		if (nr > tab[i])
			i++;
		else
		{
			nr = tab[i];
			i++;
		};
	}
	return (nr);
}

int		*ft_nr(int a)
{
	int i;
	int tab[a];

	i = 0;
	while(a > i)
	{
		if (
	}
}

int int main(int argc, char *argv[])
{
	int *nr;

	if (argc == 3)
	{
		nr = ft_nr(atoi(argv[1]), atoi(argv[2]));
		printf("%d", nr);
	}
	write (1, "\n", 1);
	return (0);
}
