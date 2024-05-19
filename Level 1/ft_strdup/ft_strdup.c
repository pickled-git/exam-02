#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *dup;
    int len = 0;
    int i = 0;
    while (src[len])
        len++;
    dup = malloc(sizeof(char) * (len + 1));
    if (!dup)
        return NULL;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}

/*
int main()
{
    char str[] = "String";
    char *dup_str = ft_strdup(str);
    
    if (dup_str)
    {
        printf("Original: %s\n", str);
        printf("Duplicate: %s\n", dup_str);
        free(dup_str);
    }
    else
        printf("Memory allocation failed\n");
    return 0;
}
*/

/*

The  strdup() function returns a pointer to a new string which is a du‐
       plicate of the string s.  Memory for the new string  is  obtained  with
       malloc(3), and can be freed with free(3).

       On  success,  the strdup() function returns a pointer to the duplicated
       string.  It returns NULL if insufficient memory was available, with er‐
       rno set to indicate the cause of the error.

*/