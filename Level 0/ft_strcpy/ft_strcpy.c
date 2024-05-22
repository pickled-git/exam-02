#include <string.h>
#include <stdio.h>


char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

/*int main()
{
    char str[] = "Hello !";
    char dest[10];
    printf("%s\n", strcpy(dest, str));
    printf("%s\n", ft_strcpy(dest, str));

}*/

/*

char *strcpy(char *dest, const char *src);
The  strcpy()  function  copies the string pointed to by src, including
       the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
       The  strings  may  not overlap, and the destination string dest must be
       large enough to receive the copy.  Beware  of  buffer  overruns!   (See
       BUGS.)

The strcpy() and strncpy() functions return a pointer to  the  destina‐
       tion string dest.


*/