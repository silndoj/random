#include <unistd.h>

void	ft_cryptstr(char *str)
{
	int		i;
	char result;

	i = 0;
	while (str[i] != '\0')
	{
		if((str[i] >= 'n' && str[i] <= 'z')
			|| (str[i] >= 'N' && str[i] <= 'Z'))
			result = str[i] - 13;
		else if ((str[i] >= 'a' && str[i] <= 'm')
			|| (str[i] >= 'A' && str[i] <= 'M'))
			result = str[i] + 13;
		else
			result = str[i];
		write (1, &result, 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2 )
		ft_cryptstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
