#include <unistd.h>

int str_len(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void rev_print(char *str)
{
    int len = (str_len(str)) - 1;
    while (len >= 0)
    {
        write(1, &str[len], 1);
        len--;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        rev_print(argv[1]);
    write(1, "\n", 1);
}