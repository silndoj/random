#include <unistd.h>
#include <stdio.h>

int main()
{
        int	i;

        i = 1;
        while (i <= 100)
        {
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("fizzbuzz\n");
				i++;
			}
			else if (i % 3 == 0)
			{
				printf("fizz\n");
				i++;
			}
			else if (i % 5 == 0)
			{
				printf("buzz\n");
				i++;
			}
			else 
			{
				printf("%i\n", i);
				i++;
			}
        }
}
