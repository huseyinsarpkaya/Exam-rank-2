#include "unistd.h"
void    print_bits(unsigned char octet)
{
    int bit = 8;
    char res;
    while(bit--)
    {
        res = (octet >> bit & 1) + 48;
        write(1,&res,1);
        
    }
}