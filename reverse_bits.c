unsigned char	reverse_bits(unsigned char octet)
{
    int bit = 8;
    int res= 0;

    while (bit--)
    {
        res <<= 1;
        res |= (octet & 1);
        octet >>= 1;
    }
    return (res);
}