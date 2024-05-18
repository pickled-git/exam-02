#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    return (n & (n - 1)) == 0;
}

/*int main()
{
    printf("%d\n", is_power_of_2(1));    // 1
    printf("%d\n", is_power_of_2(8));    // 1
    printf("%d\n", is_power_of_2(3));    // 0
    printf("%d\n", is_power_of_2(1024)); // 1
    return 0;
}*/

/*

  0000 1000  (8)
& 0000 0111  (7) 8 - 1
-----------
  0000 0000  2^3 = 8
  
  == 0, true for every power of 2

*/
