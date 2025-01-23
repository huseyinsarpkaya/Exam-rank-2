#include "stdlib.h"
#include "stdio.h"
int ft_atoi(char *str)
{
    int i = 0;
    int res= 0;
    int sign = 1;
    while(str[i] == 32 && (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = str[i] - 48 + (res * 10);
        i++;

    }
    return (sign * res);
}
int main(int ac,char **av)
{
    int nbr1;
    int nbr2;
    int swap;

    if (ac == 3)
    {   
        if ((nbr1 = ft_atoi(av[1])) > 0 && (nbr2 = ft_atoi(av[2])) > 0)

        {
        
            while(nbr2 != 0)
            {
                swap = nbr2;
                nbr2 = nbr1 % nbr2;
                nbr1 = swap;
            }
            printf("%d",nbr1);
        }

    }
    printf("\n");
}