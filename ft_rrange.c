#include "stdlib.h"
int     *ft_rrange(int start, int end)
{
    int i = 0;
    int len;
    int a = 1;
    int *res;
    len = (end - start);
    if (len < 0)
    {
        len *= -1;
        
    }
    len++;
    res = malloc(sizeof(int) * len);
    if (res)
    {
        if (start < end)
            a = -1;
        while(i < len)
        {
            res[i] = end;
            end = end + a;
            i++;
        }
    }
    return (res);
}