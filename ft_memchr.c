#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(str + i) == (unsigned char)c)
			return ((char *)(str + i));
        i++;
	}
    return(0);
}
#include <stdio.h>
int	main(void)
{
	char s[] = "sina";
	printf("%s", ft_memchr(s, 'n', 3));
}