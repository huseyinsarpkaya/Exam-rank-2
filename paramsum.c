#include "unistd.h"
void ft_put(int num)
{
    if (num > 9)
        ft_put(num / 10);
    num = num % 10 + 48;
    write(1,&num,1);
}
int main(int ac,char **av)
{
    (void)av;

    if (ac != 0)
    {
        ft_put(ac -1);
    }
    
    write(1,"\n",1);
    
}
