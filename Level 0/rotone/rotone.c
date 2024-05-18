#include <unistd.h>

void rotone(char *str)
{
    while (*str)
    {
        if ((*str >= 'A' && *str < 'Z') || (*str >= 'a' && *str < 'z'))
            *str += 1;
        else if (*str == 'Z' || *str == 'z')
            *str -= 25;
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        rotone(argv[1]);
    write(1, "\n", 1);
}