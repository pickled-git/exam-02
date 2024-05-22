#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    int i;
    for (i = 0; i < 8; i++)
    {
        result = (result << 1) | (octet & 1);
        octet >>= 1;
    }
    return result;
}

/*
int main()
{
    unsigned char byte = 0b01000001;
    unsigned char rev = reverse_bits(byte);
    printf("before: %02x\n", byte);
    printf("after: %02x\n", rev);
}
*/