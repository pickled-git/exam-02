//#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i = 1;
    int max = tab[0];
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return max;
}

/*

int main (void)
{
    int arr[] = {1, 2, 3, 10, -10000, +5000000, -5000000};
    printf("%d\n", max(arr, 7));
    return 0;
}

*/