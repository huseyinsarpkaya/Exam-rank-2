char    *ft_strrev(char *str)
{
    int i = 0;
    int len =0;
    int swap;
    while(str[len])
        len++;
    len--;
        
    while(i < len)
    {
        swap= str[i];
        str[i] = str[len];
        str[len] =swap;
        len--;
        i++;
    }
    return (str);
}