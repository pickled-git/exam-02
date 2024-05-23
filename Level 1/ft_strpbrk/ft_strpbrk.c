#include <stdio.h>
#include <string.h>


char *ft_strpbrk(const char *s1, const char *s2)
{
    while (*s1)
    {
        for (int i = 0; s2[i]; i++)
        {
            if (*s1 == s2[i])
                return (char *)s1;
        }
        s1++;
    }
    return (NULL);
}

/*
int main()
{
    const char *s1 = "hello world";
    const char *s2 = "ow";
    char *result;

    // Test 1
    result = ft_strpbrk(s1, s2);
    if (result)
        printf("Test 1: Found at '%c'\n", *result);
    else
        printf("Test 1: Not found\n");

    // Test 2
    s1 = "abcdef";
    s2 = "xyz";
    result = ft_strpbrk(s1, s2);
    if (result)
        printf("Test 2: Found at '%c'\n", *result);
    else
        printf("Test 2: Not found\n");

    // Test 3
    s1 = "42 school";
    s2 = "so";
    result = ft_strpbrk(s1, s2);
    if (result)
        printf("Test 3: Found at '%c'\n", *result);
    else
        printf("Test 3: Not found\n");

    // Test 4
    s1 = "no match here";
    s2 = "";
    result = ft_strpbrk(s1, s2);
    if (result)
        printf("Test 4: Found at '%c'\n", *result);
    else
        printf("Test 4: Not found\n");

    // Test
    s1 = "";
    s2 = "a";
    result = ft_strpbrk(s1, s2);
    if (result)
        printf("Test 5: Found at '%c'\n", *result);
    else
        printf("Test 5: Not found\n");

    return 0;
}

*/

/*
char *strpbrk(const char *s, const char *accept);

The  strpbrk() function locates the first occurrence in the string s of
       any of the bytes in the string accept.

The strpbrk() function returns a pointer to the byte in s that  matches
       one of the bytes in accept, or NULL if no such byte is found.
*/