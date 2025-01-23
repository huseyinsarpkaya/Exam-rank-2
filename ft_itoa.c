#include "stdlib.h"
int ft_str(int num)
{
    int i = 0;
    if (num == 0)
        return (1);
    while(num != 0)
    {   
        num = num / 10;
        i++;
    }
    return (i);
}
char    *ft_itoa(int nbr)
{
    int len = 0;

    len = ft_str(nbr);
    char *res;
    if (nbr < 0)
    {
        len++;
    }
    res = malloc(sizeof(char) * len + 1);
    if (nbr == 0)
    {
        res[0] = '0';
        return (res);
    }
    if (nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    res[len] = '\0';
    len--;
    
    while(nbr != 0)
    {
        res[len] = nbr % 10 + 48;
        nbr = nbr / 10;
        len--; 
    } 
    return (res);
    
}
