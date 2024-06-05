#include <unistd.h>

void    ft_mirror(char *str)
{
        int             i;
        char result;                                        
                                                            
        i = 0;                                              
        while (str[i] != '\0')                              
        {                                                   
                if (str[i] >= 'a' && str[i] <= 'z')
					result = 'a' + (122 - str[i]);
                else if (str[i] >= 'A' && str[i] <= 'Z')
                    result = 'A' + (90 - str[i]);
                else                                        
                        result = str[i];
                write (1, &result, 1);
                i++;
		}
}

int main(int argc, char *argv[]) 
{
        if (argc == 2 ) 
                ft_mirror(argv[1]);
        write(1, "\n", 1); 
        return (0); 
}
