#include "stdlib.h"
void ft_strcpy(char *s1,char *s2,int len)
{
    while(*s2 && len > 0)
    {
        *s1++= *s2++;
        len--;

    }
    *s1='\0';
}
char    **ft_split(char *str)
{
    int i = 0;
    char **res;
    int a;
    int j;
    int count = 0;
    char **ces;
    while(str[i])
    {
        while(str[i] && (str[i] == 32 || str[i] == 9 || str[i] == '\0'))
            i++;
        if (str[i])
            count++;
       while(str[i] && (str[i] != 32 && str[i] != 9 && str[i] != '\0'))
        i++;
    }
    res = malloc(sizeof(char *) * count + 1);
    i = 0;
    ces = res;
    while(str[i])
    {
        while(str[i] && (str[i] == 32 || str[i] == 9 || str[i] == '\0'))
            i++;
        a = i;
        while(str[i] && (str[i] != 32 && str[i] != 9 && str[i] != '\0'))
            i++;
        j = i;
        if (a < j)
        {
            *res = malloc(sizeof(char) * (j - a + 1));
            ft_strcpy(*res++,&str[a],(j -a));
        } 

    
    }
    *res= '\0';
    return (ces);


}
