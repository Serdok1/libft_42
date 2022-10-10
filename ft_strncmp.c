#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    while(str1[i] && str2[i] && n--)
    {
        if(str1 - str2)
            return(str1[i] - str2[i]);
        i++;
    }
    if(n == 0)
        return(str1[i] - str2[i]);
    return(0);
}

#include <stdio.h>
int main()
{
    char a[] = "ASwasc";
    char b[] = "badswcAS";
    printf("%d", ft_strncmp(b,a,3));
}