#include "unistd.h"
int main(int argc, char **argv)
{
    int result[256]={0};
    int i = 0;
    int a = 0;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            if (!result[(int)argv[1][i]])
            {
                write(1,&argv[1][i],1);
                result[(int)argv[1][i]] = 1;
            }
            i++;
        }
        while (argv[2][a])
        {
            if (!result[(int)argv[2][a]])
            {
                write(1,&argv[2][a],1);
                result[(int)argv[2][a]] = 1;
            }
            a++;
        }
    }
    write(1,"\n",1);
}