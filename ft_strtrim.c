/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbayra <sozbayra@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:23:25 by sozbayra          #+#    #+#             */
/*   Updated: 2022/11/17 12:53:30 by sozbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	control(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && control(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && control(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

/* static int		len(const char *str, const char *set)
{
	int		i;
	int		count;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (control(str[i], set) == 1)
			count++;
		i++;
	}
	return(count);
} */
/* char *s;
	size_t i;
    size_t j;
	i = 0;
	j = 0;
	s = malloc(sizeof(*s) * (len(s1, set) + 1));
	if(!s)
		return(0);
	while(s1[i])
	{
		if(control(s1[i], set) == 0)
		{
			s[j] = s1[i];
			j++;
		}
		i++;
	}
    s[j] = 0;
    return(s); */