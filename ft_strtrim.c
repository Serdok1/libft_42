/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbayra <sozbayra@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:23:25 by sozbayra          #+#    #+#             */
/*   Updated: 2022/10/22 15:23:21 by sozbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    control(char c, char const *set)
{
    int    i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

static int		len(const char *str, const char *set)
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
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *s;
	int i;
    int j;
	i = 0;
	j = 0;
	s = malloc(sizeof(*s) * len(s1, set));
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
    return(s);
}
