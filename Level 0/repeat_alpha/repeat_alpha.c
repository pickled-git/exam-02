#include <unistd.h>

void repeat_alpha (char *str)
{
    int i;
    while (*str)
    {
        i = 1;
        if (*str >= 'A' && *str <= 'Z')
            i = *str - 'A' + 1;
        else if (*str >= 'a' && *str <= 'z')
            i = *str - 'a' + 1;
        while (i--)    
            write(1, str, 1);
        str++;
    }  
}

int main (int argc, char *argv[])
{
    if (argc == 2)
        repeat_alpha(argv[1]);
    write(1, "\n", 1);
}