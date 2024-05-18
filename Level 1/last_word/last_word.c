#include <unistd.h>

int str_len(char *str)
{
    int i;
    while (*str)
    {
        str++;
        i++;
    }
    return i;
}

void last_word(char *str)
{
    int end = str_len(str);  
    while (end > 0 && (str[end - 1] == ' ' || str[end - 1] == '\t'))
        end--;
    int start = end;
    while (start > 0 && str[start - 1] != ' ' && str[start - 1] != '\t')
        start--;
    while (start < end)
    {
        write(1, &str[start], 1);
        start++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        last_word(argv[1]);
    write(1, "\n", 1);
}
