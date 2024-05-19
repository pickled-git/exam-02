#include <unistd.h>

void putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

void putnbr(int n)
{
    char c;
    if (n > 10)
        putnbr(n / 10);
    c = n % 10 +'0';
    write(1, &c, 1);
}

int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            putstr("fizzbuzz");
        else if (i % 3 == 0)
            putstr("fizz");
        else if (i % 5 == 0)
            putstr("buzz");
        else
            putnbr(i);
        i++;
        write(1, "\n", 1);
    }
}