#include "stdlib.h"
int     *ft_range(int start, int end)
{
    int i = 0;
    int *res;
    int len;
    len = abs(end - start) + 1;
    res = malloc(sizeof(int) * len);
    while(i < len)
    {
        if (start < end)
        {
            res[i] = start;
            start++;
            i++;
        }
        else
        {
            res[i] = start;
            start--;
            i++;
        }
    }
    return (res);
}