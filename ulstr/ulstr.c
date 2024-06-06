#include <unistd.h>

void	ft_revcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			write(1, &str[i], 1);
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			write(1, &str[i], 1);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		ft_revcase(argv[1]);
	write(1, "\n", 1);
	return (0);
}
