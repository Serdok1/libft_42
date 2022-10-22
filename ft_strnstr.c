/* #include "libft.h"

char *ft_strnstr(const char	*big, const char *little, size_t len)
{
    size_t	i;
	size_t	j;

	i = 0;
	while (little[i])
		i++;
	if (i == 0)
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && little[j] == big[i + j] && i + j < len)
				j++;
			if (little[j] == 0)
				return ((char *)big + i);
		}
		if (++i == len)
			return (0);
	}
	return (0);
}

#include <stdio.h>
int main()
{
    printf("%s", ft_strnstr("123456", "456", 7));
} */