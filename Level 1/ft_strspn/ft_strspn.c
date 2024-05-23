#include <stdio.h>
#include <string.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t len = 0;
    int found;
    const char *a;

    while (*s)
    {
        found = 0;
        a = accept;
        while (*a)
        {
            if (*s == *a)
            {
                found = 1;
                break;
            }
            a++;
        }
        if (!found)
            return len;
        len++;
        s++;
    }
    return len;
}

/*
int main()
{
    const char *s1 = "abcde312$#@";
    const char *accept1 = "abcde";
    size_t result_ft, result_std;

    // Тест 1
    result_ft = ft_strspn(s1, accept1);
    result_std = strspn(s1, accept1);
    printf("Test 1: ft_strspn = %zu, strspn = %zu\n", result_ft, result_std);

    // Тест 2
    const char *s2 = "12345";
    const char *accept2 = "123";
    result_ft = ft_strspn(s2, accept2);
    result_std = strspn(s2, accept2);
    printf("Test 2: ft_strspn = %zu, strspn = %zu\n", result_ft, result_std);

    // Тест 3
    const char *s3 = "abcdef";
    const char *accept3 = "xyz";
    result_ft = ft_strspn(s3, accept3);
    result_std = strspn(s3, accept3);
    printf("Test 3: ft_strspn = %zu, strspn = %zu\n", result_ft, result_std);

    // Тест 4
    const char *s4 = "abc123";
    const char *accept4 = "abc";
    result_ft = ft_strspn(s4, accept4);
    result_std = strspn(s4, accept4);
    printf("Test 4: ft_strspn = %zu, strspn = %zu\n", result_ft, result_std);

    // Тест 5
    const char *s5 = "";
    const char *accept5 = "abc";
    result_ft = ft_strspn(s5, accept5);
    result_std = strspn(s5, accept5);
    printf("Test 5: ft_strspn = %zu, strspn = %zu\n", result_ft, result_std);

    // Тест 6
    const char *s6 = "123abc";
    const char *accept6 = "321";
    result_ft = ft_strspn(s6, accept6);
    result_std = strspn(s6, accept6);
    printf("Test 6: ft_strspn = %zu, strspn = %zu\n", result_ft, result_std);

    return 0;
}
*/