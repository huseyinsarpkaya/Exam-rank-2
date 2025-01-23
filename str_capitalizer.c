#include "unistd.h"
void ft_str(char *str)
{
    int i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -=32;
     write(1,&str[i],1);

    
    while(str[++i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] +=32;
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i] && (str[i - 1] == 32 || str[i - 1] == 9))
                str[i] -=32;
        }
             write(1,&str[i],1);
        
    }
}
int main(int ac, char **av)
{
    int i = 1;
     if (ac < 2)
        write(1,"\n",1);
    while (i < ac)
    {
        ft_str(av[i]);
        write(1,"\n",1);
        i++;
    }
   
}