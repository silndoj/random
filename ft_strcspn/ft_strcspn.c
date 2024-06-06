//#include <stdio.h>
//
//
#include <sys/_types/_size_t.h>
int		ft_check(char c, const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int cnt;

	cnt = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_check(s[i], reject) == 0)
		{
			i++;
			cnt++;
		}
		else if (ft_check(s[i], reject) == 1)
			i++;
	}
	return (cnt);
}
//
//int main()
//{
//	int n;
//
//	printf("%d\n", n);
//	return (0);
//}
