#include <unistd.h>

void snake_to_camel(char *str)
{
    char c;
    while (*str)
    {
        if (*str == '_')
        {
            str++;
            c = *str;
            c = c - 32;
            write(1, &c, 1);
        }
        else
            write(1, str, 1);
        str++;
    }

}

int main(int argc, char *argv[])
{
    if (argc == 2)
        snake_to_camel(argv[1]);
    write(1, "\n", 1);
    return 0;
}