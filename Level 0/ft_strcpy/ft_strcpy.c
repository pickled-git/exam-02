#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    char *start = s1;
    while (*s2)
    {
        *s1 = *s2;
        s2++;
        s1++;
    }
    *s1 = '\0';
    return start;
}

/*

int main()
{
    char dest[10];
    char src[] = "Hey, Ola!";

    printf("%s\n", ft_strcpy(dest, src));
}


char *strcpy(char *dest, const char *src);
The  strcpy()  function  copies the string pointed to by src, including
       the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
       The  strings  may  not overlap, and the destination string dest must be
       large enough to receive the copy.  Beware  of  buffer  overruns!   (See
       BUGS.)

       The strcpy() and strncpy() functions return a pointer to  the  destina‐
       tion string dest.



*/
