#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

/*

int main ()
{
    unsigned char octet = 0x41; // 01000001 в двоичной системе
    unsigned char result = swap_bits(octet);
    printf("Original: %02x\n", octet); // Ожидается: 41
    printf("Swapped: %02x\n", result); // Ожидается: 14
    return 0;
}

*/