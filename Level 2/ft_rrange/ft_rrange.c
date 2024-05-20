#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int len;
    if (end >= start)
        len = end - start + 1;
    else
        len = start - end + 1;
    int *range = malloc(sizeof(int) * len);
    if (!range)
        return NULL;
    int i = 0;
    while (i < len)
    {
        if (end > start)
            range[i] = end - i;
        else
            range[i] = end + i;
        i++;
    }
    return range;
}

/*int main ()
{
    int start = -1;
    int end = 3;
    int len = (end >= start) ? (end - start + 1) : (start - end + 1);
    int *arr = ft_rrange(start, end);
    for (int i = 0; i < len; i++)
        printf("%d\n", arr[i]);
}*/