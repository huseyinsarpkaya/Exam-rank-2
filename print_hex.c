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
    char res;
    if (num >= 16)
        ft_put(num / 16);
    res = num % 16;
    write(1,&res["0123456789abcdef"],1);

}
int main(int ac,char **av)
{
    int num;
    if (ac == 2)
    {
        num = ft_atoi(av[1]);
        ft_put(num);
    }
    write(1,"\n",1);
}