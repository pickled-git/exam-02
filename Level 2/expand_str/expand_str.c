#include <unistd.h>

void put_char (char c)
{
    write(1, &c, 1);
}

void expand_str (char *str)
{
    int first_word = 0;
    while (*str)
    {
        while (*str == ' ' || *str == '\t')
            str++;
        if (*str && first_word)
            write(1, "   ", 3);
        if (*str)
            first_word = 1;
        while (*str && *str != ' ' && *str != '\t')
        {
            put_char(*str);
            str++;
        }
    }
}

int main (int argc, char *argv[])
{
    if (argc == 2)
        expand_str(argv[1]);
    write(1, "\n", 1);
    return 0;
}