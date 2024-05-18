#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void do_op(char *str[])
{
    int x = atoi(str[1]);
    int z = atoi(str[3]);

    if (str[2][0] == '+')
        printf("%d", x + z);
    else if (str[2][0] == '-')
        printf("%d", x - z);
    else if (str[2][0] == '*')
        printf("%d", x * z);
    else if (str[2][0] == '/')
        printf("%d", x / z);
    else if (str[2][0] == '%')
        printf("%d", x % z);
}

int main (int argc, char *argv[])
{
    if (argc == 4)
        do_op(argv);
    printf("\n");
}