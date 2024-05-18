#include <unistd.h>

void alpha_mirror(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
            *str = 'Z' - (*str - 'A');
        else if (*str >= 'a' && *str <= 'z')
            *str = 'z' - (*str - 'a');
        write(1, str, 1);
        str++;        
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        alpha_mirror(argv[1]);
    write(1, "\n", 1);
    return 0;
}