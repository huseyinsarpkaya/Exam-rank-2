#include "stdlib.h"
int     *ft_range(int start, int end)
{
    int len;
    int i = 0;
    int *res;
    int a= 1;
    len = (end - start);
    if (len < 0)
        len *= -1;
    len++;
    res = malloc(sizeof(int) * len);
    if (res)
    {
        if (start > end)
            a = -1;
        while(i < len)
        {
            res[i] = start;
            start = start + a;
            i++;
        }
    }
   
    return (res);
}
