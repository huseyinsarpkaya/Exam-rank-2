#include "unistd.h"
int main(int ac,char **av)
{
    int i = 0;
    int end = 0;
    int start = 0;
    int value = 0;
    char *str=av[1];
    if (ac == 2)
    {
        while(str[i])
            i++;
            i--;
        while(str[i])
        {
            while(str[i] && (str[i] == 32 || str[i] == 9))
            {
                i--;
                value = 1;
            }
            end = i;
            while(str[i] && (str[i] != 32 && str[i] != 9))
                i--;
            start = i + 1;
            
            while(start <= end)
            {
                write(1,&str[start],1);
                start++;
            }
             if (value = 1 && str[i] != 0)
                    write(1," ",1);
        }
    
    }
    write(1,"\n",1);
}