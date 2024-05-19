#include <unistd.h>

void rot_13(char *str)
{
    char c;
    while (*str)
    {
        c = *str;
        if (c >= 'A' && c <= 'Z')
        {
            if (c + 13 <= 'Z')
                c = c + 13;
            else
                c = c - 13;
        }
        else if (c >= 'a' && c <= 'z')
        {
            if (c + 13 <= 'z')
                c = c + 13;
            else
                c = c - 13;
        }
        write(1, &c, 1);
        str++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        rot_13(argv[1]);
    write(1, "\n", 1);
}