int     ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int value= 0;
    int res= 0;
    int sign =1;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            value = str[i] - 48;
        else if (str[i] >= 'a' && str[i] <= 'f')
            value = str[i] - 'a' + 10;
        else if(str[i] >= 'A' && str[i] <= 'F')
            value = str[i] - 'A' + 10;
        else 
            break;
        res = res * str_base + value;
        i++;

    }
    return (res * sign);
}
