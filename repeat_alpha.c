#include "unistd.h"
int main(int ac ,char **av)
{
    int i = 0;
    int count = 0;
    char *str=av[1];
    if (ac == 2)
    {
        while(str[i])
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                count = str[i] - 'a' + 1;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                count = str[i] - 'A' + 1;
            else 
                count = 1;
            while(count--)
            {
                write(1,&str[i],1);

            }
            i++;

        }
    }
    write(1,"\n",1);
}