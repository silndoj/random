
int		max(int* tab, unsigned int len)
{
	int max;
	int	i;

	i = 0;
	max = tab[0];
	while (i < len)
	{
		if (max > tab[i])
			i++;
		else
		{
			max = tab[i];
			i++;

		}
	}
	return (max);
}
