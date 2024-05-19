#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int res = 0;
    int sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')        
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return res * sign;
}

/*
int main()
{
    char *str = "   -2354";
    printf("%d\n", ft_atoi(str)); // Ожидаемый результат: -2354

    char *str2 = "42";
    printf("%d\n", ft_atoi(str2)); // Ожидаемый результат: 42

    char *str3 = "   +12345abc";
    printf("%d\n", ft_atoi(str3)); // Ожидаемый результат: 12345

    char *str4 = "   \t\n\r\v\f-678";
    printf("%d\n", ft_atoi(str4)); // Ожидаемый результат: -678

    return 0;
}
*/

/*

isspace()
              checks for white-space characters.  In the "C" and  "POSIX"  lo‐
              cales,  these are: space, form-feed ('\f'), newline ('\n'), car‐
              riage return ('\r'), horizontal tab  ('\t'),  and  vertical  tab
              ('\v').

*/