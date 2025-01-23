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
int ft_prime(int num)
{
    int i = 2;
    if (num <= 1)
        return (0);
    while (i * i <= num)
    {
        if (num % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac,char **av)
{
    int res= 0;
    int i= 0;
    if (ac == 2)
    {
        int num = ft_atoi(av[1]);
        while (num > 0)
        {
            if (ft_prime(num))
                res += num;
                num--;
        }
        

    }
    ft_put(res);
    write(1,"\n",1);
}