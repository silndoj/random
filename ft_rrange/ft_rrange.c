int	*ft_rrange(int start, int end)
{
	int* number;
	int	len;
	int	i;
	int	j;
	int flag;


	flag = 0;
	i = end;
	len = 0;
	j = 0;
	if (i > start)
	{	
		while (i >= start)
		{
			i--;
			len++;
		}
	}
	else if (i < start)
	{	
		while (i <= start)
		{
			i++;
			len++;
		}
	}
	number = (int *) malloc(sizeof(int)*len);
	if (end > start)
	{
		while (end >= start)
		{
			number[j] = end;
			j++;
			end--;
		}
	}
	if (end < start)
	{
		while (end <= start)
		{
			if (end == -1)
				flag = 1;
			else if (flag == 0 || end == -1)
			{
				number[j] = end;
				j++;
				end++;
				flag = 0;
			}
			if (flag == 1)
			{
				end = 0;
				number[j] = end;
				j++;
				end++;
				flag = 0;
			}
		}
	}
	number[j] = '\0';
	return	(number);
}
