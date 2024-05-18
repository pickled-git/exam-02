#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/*

int main (void)
{
    int x = 3;
    int y = 4;

    int *x_p = &x;
    int *y_p = &y;

    printf("x = %d, y = %d\n", x, y);
    ft_swap(x_p, y_p);
    printf("x = %d, y = %d\n", x, y);
}

*/