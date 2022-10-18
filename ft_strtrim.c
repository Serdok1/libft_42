/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbayra <sozbayra@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:23:25 by sozbayra          #+#    #+#             */
/*   Updated: 2022/10/18 19:02:40 by sozbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    char *s;
	s = malloc(sizeof(char) * sizeof(s1));
	int i = 0;
    int j;
	int k = 0;
	int controller = 0;
	while(s1[i])
	{
		j = 0;
		while(set[j] && controller == 0)
		{
			if(s1[i] == set[j])
			{
				k++;
			}
			else
				s[k] = s1[i];
			j++;
		}
		i++;
	}
    s[i] = 0;
    return(s);
}

#include <stdio.h>
int main()
{
    char s[] = "japan";
    printf("%s", ft_strtrim(s, "aj"));
}