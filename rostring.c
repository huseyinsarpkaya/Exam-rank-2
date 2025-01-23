#include "unistd.h"
int main(int ac,char **av)
{
    char *str= av[1];
    int start = 0;
    int end;
    int value = 0;
    int i = 0;
    if (ac > 1)
    {
        while (str[i] && (str[i] == 32 || str[i] == 9))
            i++;
        start = i;
        while(str[i] && (str[i] != 32 && str[i] != 9))
            i++;
        end= i -1;
        while (str[i] && (str[i] == 32 || str[i] == 9))
            i++;
        if (str[i] == 0)
          while(start <= end)
        {
            write(1,&str[start],1);
            start++; 
           
        }
        if (str[i]== 0)
        {
              write(1,"\n",1);
            return 0;
        }
        

        while(str[i])
        {
            if (str[i] == 32 || str[i] == 9)
                value =1;
            else
            {
                if (value == 1)
                    write(1," ",1);
                write(1,&str[i],1);
                value = 0;
            }
            i++;
        }
        write (1," ",1);
        while(start <= end)
        {
            write(1,&str[start],1);
            start++; 
        }

        
    }
    write(1,"\n",1);
}