#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    i = ft_strlen(s) - 1;
    while(s[i])
    {
        if(s[i] == c)
            return((char *)(s + i));
        i--;
    }
    return(0);
}
#include <stdio.h>
int main()
{
    char s[] = ".sina.eren";
    printf("%s", ft_strrchr(s, '.'));
}