unsigned int    lcm(unsigned int a, unsigned int b)
{
    int i;
    if (a == 0 || b == 0)
        return (0);
    if (a > b)
        i = a;
    else
        i = b;
    while(80)
    {
        if (i % a == 0 && i % b == 0)
            return (i);
        i++;
    }
}
