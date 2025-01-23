#include "unistd.h"
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
void ft_put(int num)
{
    if (num > 9)
        ft_put(num / 10);
    num = num % 10 + 48;
    write(1,&num,1);
}
int main(int ac,char **av)
{
    int i = 1;
    if (ac == 2)
    {   
       int num = ft_atoi(av[1]);
       while(i <= 9)
       {
            ft_put(i);
            write(1," x ",3);
            ft_put(num);
            write(1," = ",3);
            ft_put(num * i);
            write(1,"\n",1);
            i++;
       }
    }
    if (ac != 2)
        write(1,"\n",1);
}