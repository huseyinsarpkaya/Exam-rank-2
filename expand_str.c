#include <unistd.h>
int main(int ac,char **av)
{
    int value= 0;
    int i = 0;
    if (ac == 2)
    {
        while(av[1][i] && (av[1][i] == 32 || av[1][i] == 9))
            i++;
        while(av[1][i])
        {
            if (av[1][i] == 32 || av[1][i] == 9)
                value = 1;
            else
            {
                if (value == 1)
                    write(1,"   ",3);
                write(1,&av[1][i],1);
                value = 0;
            }
            i++;
        }
    }
    write(1,"\n",1);
}