#include <unistd.h>

int str_len (char *str)
{
    int i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return i;
}

void search_and_replace(char *str, char *search, char *replace)
{
    while (*str)
    {
        if (*str == *search)
            write(1, replace, 1);
        else
            write(1, str, 1);
        str++;
    }

}

int main (int argc, char *argv[])
{
    if(argc == 4 && (str_len(argv[2]) < 2) && (str_len(argv[3]) < 2))
        search_and_replace(argv[1], argv[2], argv [3]);
    write(1, "\n", 1);
}