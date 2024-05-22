#include <unistd.h>

void putnbr(int n)
{
    char c;
    if (n >= 10)
        putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    (void)argv;
    if (argc < 2)
        write(1, "0", 1);
    else
        putnbr(argc - 1);
    write(1, "\n", 1);
}