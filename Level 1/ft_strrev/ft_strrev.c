#include <stdio.h>

char *ft_strrev(char *str)
{
    int len = 0;
    int i;
    char temp;

    while (str[len])
        len++;
    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}


/*
int main()
{
    char str1[] = "Hello, world!";
    char str2[] = "42";
    char str3[] = "A";
    char str4[] = "";
    char str5[] = "Racecar";

    // Тест 1
    printf("Original: %s\n", str1);
    printf("Reversed: %s\n\n", ft_strrev(str1));

    // Тест 2
    printf("Original: %s\n", str2);
    printf("Reversed: %s\n\n", ft_strrev(str2));

    // Тест 3
    printf("Original: %s\n", str3);
    printf("Reversed: %s\n\n", ft_strrev(str3));

    // Тест 4
    printf("Original: %s\n", str4);
    printf("Reversed: %s\n\n", ft_strrev(str4));

    // Тест 5
    printf("Original: %s\n", str5);
    printf("Reversed: %s\n\n", ft_strrev(str5));

    return 0;
}
*/
