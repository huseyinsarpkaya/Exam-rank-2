#include "unistd.h"
int main(int ac,char **av)
{
    int i = 0;
    int a = 0;
    char *s1= av[1];
    char *s2=av[2];
    if (ac == 3)
    {
        while(s2[a])
        {
            if (s2[a] == s1[i])
                i++;
            a++;
        }
        if (s1[i]== 0)
            write(1,"1",1);
        else    
            write(1,"0",1);
    }
    write(1,"\n",1);
}
