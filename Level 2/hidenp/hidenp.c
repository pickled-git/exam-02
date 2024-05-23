#include <unistd.h>

void hidenp(char *find, char *hide)
{
    int i = 0;
    int j = 0;

    while (hide[j] && find[i])
    {
        if (hide[j] == find[i])
            i++;
        j++;
    }
    if (find[i] == '\0')
        write(1, "1", 1);
    else
        write(1, "0", 1);
}

int main (int argc, char *argv[])
{
    if (argc == 3)
        hidenp(argv[1], argv[2]);
    write(1, "\n", 1);
}