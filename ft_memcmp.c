#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t i;
    unsigned char *s1 = (unsigned char *)str1;
    unsigned char *s2 = (unsigned char *)str2;

    i = 0;
    while(s1[i] && s2[i] && n--)
    {
        if(s1 - s2)
            return(s1[i] - s2[i]);
        i++;
    }
    if(n == 0)
        return(s1[i] - s2[i]);
    return(0);
}

#include <stdio.h>
int main()
{
    char a[] = "ASwasc";
    char b[] = "badswcAS";
    printf("%d", ft_memcmp(b,a,3));
}