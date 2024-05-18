//#include <string.h>
//#include <stdio.h>


int    ft_strcmp(char *s1, char *s2)
{
    while (*s1 || *s2)
    {
        if (*s1 == *s2)
        {
            s1++;
            s2++;
        }
        else
            return (*s1 - *s2);
    }
    return 0;
}

/*

int main (void)
{
    char *str = "str2";
    char *str2 = "str";

    printf("%d\n", strcmp(str, str2));
    printf("%d\n", ft_strcmp(str, str2));
}



strcmp() returns an integer indicating the result of the comparison, as
       follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.

*/