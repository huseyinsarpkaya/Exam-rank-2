int max(int* tab, unsigned int len)
{
    int swap;
    int i = 0;
    if (tab == 0 || len < 0)
        return (0);
    swap = tab[i];
    while(i < (len))
    {
        if (swap < tab[i])
        {
            swap = tab[i];
        }
        i++;
    }
    return (swap);
}