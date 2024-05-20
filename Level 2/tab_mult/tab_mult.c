# include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    while (*str >= '0' && *str <= '9') 
    {
        res = res * 10 + (*str - '0');
        str++;        
    }
    return res;
}

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
    if (n >= 10)
        putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

void tab_mult(int i, int num)
{
    putnbr(i);
    putstr(" x ");
    putnbr(num);
    putstr(" = ");
    putnbr(i * num);
    putstr("\n");    
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    write(1, "\n", 1);
    int num = ft_atoi(argv[1]);
    int i = 1;
    while (i <= 9)
    {
        tab_mult(i, num);
        i++;
    }
}