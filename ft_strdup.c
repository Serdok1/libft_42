#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	i;

	s = malloc(sizeof(str) * (ft_strlen(str) + 1));
	i = 0;
	if (!s)
		return (0);
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = 0;
	return (s);
}

#include <stdio.h>
int	main(void)
{
	char a[] = "sina";
	printf("%s", ft_strdup(a));
}