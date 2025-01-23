#include "unistd.h"
void ft_st(int num)
{
    if (num > 9)
        ft_st(num / 10);
    num = num % 10 + 48;
    write(1,&num,1);
}
int main()
{
    int i = 1;
    while(i <= 100)
    {
        if (i % 15 == 0)
            write(1,"fizzbuzz",8);
        else if (i % 5 == 0)
            write(1,"buzz",4);
        else if (i % 3 == 0)
            write(1,"fizz",4);
        else
            ft_st(i);
            write(1,"\n",1);
        i++;

    }
}